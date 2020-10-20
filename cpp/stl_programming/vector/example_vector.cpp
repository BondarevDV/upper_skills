#include <vector>
#include <iostream>


/*
 * Примеры использования вектора
 *
 */

int main(int argc, char* argv[]){ 
     
     std::vector<int> my_vector;
     std::cout<<my_vector.size()<<std::endl;     
      
     my_vector.reserve(3);    
     my_vector = {1, 2, 3, 4}; 
     std::cout<<my_vector.size()<<std::endl;     
     std::cout<<my_vector.capacity()<<std::endl;     
}
