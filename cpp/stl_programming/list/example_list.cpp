#include <list>
#include <forward_list>
#include <algorithm>
#include "tools.h"


using namespace std;


template<typename T>	
bool comp (T a, T b) {
  return a[0].second > b[0].second;
}


template<typename T>
void sort_list(T& list){
     list.sort();
     TOOLS::print_container<decltype(list)>(list); 
}


int main(int argc, char* argv[]){

    	

    list<int> my_list1;
    list<int> my_list2;
    forward_list<int> my_forward_list_1;
    forward_list<int> my_forward_list_2;

    my_list1 = argv;
    sort_list<decltype(my_list1)>(my_list1); 
      


    //my_list1.sort();
    //TOOLS::print_container<decltype(my_list1)>(my_list1);

    // отсортировать с компаратороом
    //my_list1.sort(comp<decltype(my_list1)>);
    //TOOLS::print_container<decltype(my_list1)>(my_list1);
    //std::cout<<"-----------------------------------"<<std::endl;
    //for(int i = 0; i < 4; ++i)
    //   my_list2.push_back(i);
    //my_list1.splice(my_list1.begin(), my_list2);


    //std::cout<<"-----------------------------------"<<std::endl;
    
    //my_list1.merge( my_list2);
      
    //my_list1.sort();
    //TOOLS::print_container<decltype(my_list1)>(my_list1);

}
