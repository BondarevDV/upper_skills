#include <map>
#include "tools.h"
#include <string>


using namespace std;

int main(int argc, char* argv[]){
    map<string, int> my_map;
    my_map["a"] = 1;
    my_map["b"] = 2;
    my_map["c"] = 3;
    my_map["d"] = 4;
    
    std::cout<<my_map["a"]<<endl; // если не существует ключа, он будет создан
    std::cout<<my_map.at("a")<<endl; // если ключа нет будет вызвано исключение
    //TOOLS::print_container<decltype(my_map)>(my_map);
    for(auto it: my_map){
        std::cout<< it.first<<"=";
        std::cout<< it.second << std::endl;

        
    }
}
