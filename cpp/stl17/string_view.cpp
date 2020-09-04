#include <iostream>
#include <string_view>




int main(void){

     std::string_view  str("hello, Dima");
     std::cout<<str<<'\n';
     std::cout<<str.front()<<'\n';
     std::cout<<str.back()<<'\n';
     std::cout<<str.at(1)<<'\n';
     std::cout<<str.data()<<'\n';
     std::cout<<str.size()<<'\n';
     std::cout<<str.empty()<<'\n';
     str.remove_prefix(1);
     str.remove_suffix(3);
     std::cout<<str<<'\n';

     std::cout<<str.substr(0, 3)<<'\n';

}

