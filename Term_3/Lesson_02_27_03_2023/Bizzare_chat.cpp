#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>

struct ResposeData {
    bool Success;
    std::string Response;
};

ResposeData MakeTrueRespose(){
    return {true, ""};
}

ResposeData MakeFalseRespose(std::string responce_text){
    return {false, responce_text};
}

class AccessControl {

    std::unordered_set<std::string> roleList; // {ADMIN, MODERATOR, BANNED, USER}
    std::unordered_map<std::string, std::unordered_set<int>> GrantedRoles; // {"ADMIN": {1, ...}; "MODERATOR": {1, 2, ...}...}

public:

    bool HasRole(int id, const std::string& roleName){
        if (roleList.count(roleName)){ // roleName exist in roleList
            std::unordered_set<int>& UserWithRoleName = GrantedRoles.find(roleName)->second;
            return (UserWithRoleName.count(id) == 1);
        } else { // roleName doesn't exist in roleList
            return false;
        }
    }

    bool GrantRole(int id, const std::string& roleName){
        if (roleList.count(roleName)){
            GrantedRoles[roleName].insert(id);
            return true;
        } else {
            return false;
        }
    }

    bool RemoveRole(int id, const std::string roleName){
        if (roleList.count(roleName)){
            auto& UsersWithRoleName= GrantedRoles[roleName];
            auto iter = UsersWithRoleName.find(id);
            if (iter == UsersWithRoleName.end()){
                return false;
            } else {
                UsersWithRoleName.erase(iter);
                return true;
            }
        } else {
            return false;
        }
    }

    void AddRoleToRoleList(std::string roleName){
        roleList.insert(roleName);
        GrantedRoles.insert({roleName, {}});
    }
};

class Pauseable {

    bool Paused = false;

public:

    bool IsPaused() const {
        return Paused;
    }

    void Pause(){
        Paused = true;
    }

    void UnPause(){
        Paused = false;
    }

};

class SystemBase : public AccessControl, public Pauseable {

    const std::string admin_role = "ADMIN";
    const std::string moderator_role = "MODERATOR";
    const std::string banned_role = "BANNED";
    const std::string user_role = "USER";

public:

    SystemBase(int admin){
        AddRoleToRoleList(admin_role);
        AddRoleToRoleList(moderator_role);
        AddRoleToRoleList(banned_role);
        AddRoleToRoleList(user_role);

        GrantRole(admin, admin_role);
        GrantRole(admin, moderator_role);
        GrantRole(admin, user_role);
    };

    ResposeData RegisterNewUser(int sender, int newUser){
        // sender have to has role ADMIN to add new user
        if (HasRole(sender, "ADMIN")){
            //register new user
            // (GrantedRoles.find("USER")->second).insert(newUser);
            GrantRole(newUser, "USER");
            return MakeTrueRespose();
        } else {
            // drop error!
            return MakeFalseRespose("User don't have admin role!");
        }
    }

    ResposeData GrantModeratorRole(int sender, int user){
        if (HasRole(sender, "MODERATOR") || HasRole(sender, "ADMIN")){
            GrantRole(user, "MODERATOR");
            return MakeTrueRespose();
        } else {
            return MakeFalseRespose("Only admin or moderator can grant moderator role!");
        }
    }

    ResposeData GrantAdminRole(int sender, int user){
        if (HasRole(sender, "ADMIN")){
            GrantRole(user, "ADMIN");
            GrantRole(user, "MODERATOR");
            return MakeTrueRespose();
        } else {
            return MakeFalseRespose("Only admin can grant admin role!");
        }
    }

    ResposeData BanUser(int sender, int user){
        if (HasRole(sender, "MODERATOR") || HasRole(sender, "ADMIN")){
            if (HasRole(user, "MODERATOR") || HasRole(user, "ADMIN")){
                MakeFalseRespose("Admin or moderator can't be banned!");
            } else {
                GrantRole(user, "BANNED");
            }
            return MakeTrueRespose();
        } else {
            return MakeFalseRespose("Only admin or moderator can ban people!");
        }
    }

    ResposeData UnBanUser(int sender, int user){
        if (HasRole(sender, "MODERATOR") || HasRole(sender, "ADMIN")){
            RemoveRole(user, "BANNED");
            return MakeTrueRespose();
        } else {
            return MakeFalseRespose("Only admin or moderator can unban people!");
        }
    }

    ResposeData StopChat(int sender) {
        if (HasRole(sender, "ADMIN")){
            if (IsPaused()){
                return MakeFalseRespose("Chat already paused!");
            }
            Pause();
            return MakeTrueRespose();
        } else {
            return MakeFalseRespose("Only admin can pause chat!");
        }
    }

    ResposeData ResumeChat(int sender){
        if (HasRole(sender, "ADMIN")){
            if (!IsPaused()){
                return MakeFalseRespose("Chat already run!");
            }
            UnPause();
            return MakeTrueRespose();
        } else {
            return MakeFalseRespose("Only admin can unpause chat!");
        }
    }
};
void PrintResponse(const ResposeData& response) {
     std::cout << "result: " << response.Success << "\nresponse: " <<
    response.Response << "\n";
}
int main() {
    const int USER1 = 1;
    const int USER2 = 2;
    const int USER3 = 3;
    SystemBase chat(1);
    auto responseRegisterFromAdmin1 = chat.RegisterNewUser(USER1, USER2);
    PrintResponse(responseRegisterFromAdmin1);
    auto responseRegisterFromAdmin2 = chat.RegisterNewUser(USER1, USER2);
    PrintResponse(responseRegisterFromAdmin2);
    auto responseGrantFromAdmin = chat.GrantModeratorRole(USER1, USER2);
    PrintResponse(responseGrantFromAdmin);
    auto responseRegisterFromModerator = chat.RegisterNewUser(USER2,
    USER3);
    PrintResponse(responseRegisterFromModerator);
    auto responseRegisterFromAdmin3 = chat.RegisterNewUser(USER1, USER3);
    PrintResponse(responseRegisterFromAdmin3);
    auto responseBanFromModer = chat.BanUser(USER2, USER3);
    PrintResponse(responseBanFromModer);
    auto responseStopFromModer = chat.StopChat(USER2);
    PrintResponse(responseStopFromModer);
    auto responseStopFromAdmin = chat.StopChat(USER1);
    PrintResponse(responseStopFromAdmin);
}