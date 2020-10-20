#include <array>
#include "tools.h"




int main(int argc, char* argv[]){
    std::array<int, 10> my_array = {{1, 2, 3, 4, 5}};
    my_array[5] = 10;
    std::cout<<my_array[5]<<std::endl;
    TOOLS::print_container<decltype(my_array)>(my_array);
}
