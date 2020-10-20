#include <set>

#include <string>
#include "tools.h"

using namespace std;
/*
 * Разобрать основные контейнеры
 *
 */



int main(int argc, char* argv[]){
    set<string> my_set = {"a", "a", "a", "d", "test_string"};
    cout<<my_set.size()<<endl;
    
    my_set.insert("ad"); 
    my_set.insert("dadb"); 
    auto it = my_set.find("d");
    my_set.emplace_hint(it, "hello");
    cout<<"set count a = " << my_set.count("a")<<endl;
    TOOLS::print_container<decltype(my_set)>(my_set);

    multiset<string> my_mset = {"a", "a", "a", "d", "test_string", "ds", "dm", "dn"};
    auto _st = my_mset.equal_range("d");
    
    cout<<"equal range = "<< *_st.first<< endl; 
    cout<<"equal range = "<< *_st.second<< endl; 
    cout<<"multiset count a = " << my_mset.count("a")<<endl;
}
