#include <vector>

class ModuleBase {
public:
    virtual void OnTick(double price) = 0;
    virtual void CloseAll() = 0;
};

class ModulesRouter {

private:
    std::vector<ModuleBase*> modules;

public:
    void OnTick(double price) {
        for (auto moduleptr : modules){
            moduleptr->OnTick(price);
        }
    }

    void AddModule(ModuleBase* moduleptr){
        modules.push_back(moduleptr);
    }
    void CloseAll(){
        for (auto moduleptr : modules){
            moduleptr->CloseAll();
        }
    }
};

class ModuleBorders : public ModuleBase {
private:
    AccountInterface* ptr;
    std::vector<int> posIds;

public:
    ModuleBorders(AccountInterface* account) : ptr(account) {};

    void CloseAll() override {
        for (auto id : posIds){
            ptr->ClosePosition(id); 
        }
        posIds = std::vector<int>();
    }

    void OnTick(double price) override {
        if (price <= 4){
            auto balance = ptr->GetAvailBalance();
            auto position = balance / price / price * 0.99;
            auto posIndex = ptr->OpenPosition(position);
            posIds.push_back(posIndex);
        } else if  (price >= 6){
            CloseAll();
        }
    }
};