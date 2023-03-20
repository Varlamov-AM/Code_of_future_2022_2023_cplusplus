#include <iostream>
#include <string>

class People {

public:

    People(std::string f_name, std::string s_name, uint a){
        this->first_name = f_name;
        this->second_name = s_name;
        this->age = a;
    };

    People(const People& clone){
        first_name = clone.first_name;
        second_name = clone.second_name;
        age = clone.age;
    }

    People(){};

    ~People(){};

    void Greeting(){
        std::cout << "Hello, i'm people, and my name is " << 
        first_name << " " << second_name << "!\n";
    }

    std::string Get_first_name() const {
        return first_name;
    }

    std::string Get_second_name() const {
        return second_name;
    }

    uint Get_age() const {
        return age;
    }

private:

    std::string first_name;
    std::string second_name;
    uint        age;

};

class Worker : public People {

public:

    Worker(){};
    
    Worker(std::string f_w_name, std::string s_w_name, uint w_age, std::string job_name) 
    : People(f_w_name, s_w_name, w_age){
        job = job_name;
    }

    Worker(const People& person, std::string job_name) : People(person) {
        job = job_name;
    }

    Worker(const Worker& worker_obj) 
    : People(worker_obj.Get_first_name(), 
             worker_obj.Get_second_name(), 
             worker_obj.Get_age()){
        job = worker_obj.job;
    }
    
    ~Worker(){};

    void Greeting(){
        std::cout << "Hello, i'm worker, and my name is " << 
        Get_first_name() << " " << Get_second_name() << "!\n";
    }

    std::string job;

private:

    std::string inn;

};

class Union_member : public Worker {

public:

    Union_member(){};

    Union_member(std::string first_name, 
                 std::string second_name, 
                 uint age, 
                 std::string job_name, 
                 float paynment)
    : Worker(first_name, second_name, age, job_name){
        paynment_value = paynment;
    }

    Union_member(const People& person, std::string job_name, float paynment)
    : Worker(person, job_name){
        paynment_value = paynment;
    }

    Union_member(const Worker& worker_obj, float paynment)
    : Worker(worker_obj){
        paynment_value = paynment;
    }

    ~Union_member(){};

    void Greeting(){
        std::cout << "Hello, i'm union_member, and my name is " << 
        Get_first_name() << " " << Get_second_name() << "!\n";
    }

private:

    float paynment_value;

};

class Manager {

public:

    Manager(){};
    ~Manager(){};

    void Manage(){
        return;
    };
    std::string organization;

};

class Director : public Worker, public Manager{

public:

    Director(){};
    ~Director(){};

private:


};

int main(){

    std::string f_p_name = "Ivan";
    std::string f_p_soname = "Ivanov";
    uint f_p_age = 18;

    People first_people = People(f_p_name, f_p_soname, f_p_age);

    // first_people.Greeting();

    std::string job_name = "Factory worker";

    Worker first_worker = Worker(f_p_name, f_p_soname, f_p_age, job_name);
    Worker second_worker = Worker(first_people.Get_first_name(),
                                  first_people.Get_second_name(),
                                  first_people.Get_age(), 
                                  job_name);
    Worker third_worker = Worker(first_people, job_name);

    Union_member first_union_member = Union_member(first_worker, 1000.);

    // first_worker.Greeting();
    // first_union_member.Greeting();

    Director director = Director();

    Worker* worker_ptr = new Worker(first_worker);

    std::cout << "Our pointer to worker says, that his job is " <<  worker_ptr->job << "\n";

    People* people_ptr = new People(first_people);

    Worker* a_worker_ptr = static_cast<Worker*>(people_ptr);

    People* a_people_ptr = static_cast<People*>(worker_ptr);

    std::cout << "Our pointer to people says, that his job is " <<  a_worker_ptr->job << "\n";
    std::cout << "Casted worker ptr to people ptr greets as a \n";
    a_people_ptr->Greeting(); 

    return 0;
}