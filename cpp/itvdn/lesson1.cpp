#include <iostream>
#include <vector>


template<typename T>
void f(T param){

}



template<typename T, std::size_t N>
constexpr std::size_t arraySize(T(&)[N]) noexcept
{
    return N;
}


void test1(){
    int nCount[] = {1, 2, 3, 4, 5, 5, 6, 7};
    auto d = 5ul;    
    auto size = arraySize<int, 8>(nCount);
    std::cout<<size<<std::endl;
}


void test2(){ 
   // стандарт 17 позволяет опускать объявление типа контейнера std::vector<int>
   std::vector a = {1, 2, 3, 4, 5, 6};
   for ( auto it: a){
       std::cout<<it<<std::endl;
   }
}

int main(int argc, char* argv[])
{
       
    test2();
    return 1;
}



