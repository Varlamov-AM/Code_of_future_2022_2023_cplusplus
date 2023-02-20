#include <iostream>
#include <set>
#include <map>
#include <multiset>


int main(){

    std::set simple_set;

    simple_set.insert(1);
    simple_set.erase(1);
    simple_set.erase(simple_set.begin());
    simple_set.find(1);
    simple_set.begin();
    simple_set.end();

    return 0;
}
