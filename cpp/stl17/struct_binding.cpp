#include <iostream>


struct TData{

    const char* msg;
    int id;

};

TData get_struct(){

       return { "test msg", 42};
}


std::pair<const char*, int> get_struct_v2(){


        return {"test msg 2", 1};
}


int main(){

      auto [msg, id] = get_struct();
      std::cout<<"id = "<<id<<std::endl;
      std::cout<<"msg = "<<msg<<std::endl;


      //msg = get_struct_v2().get(0);
      //std::cout<<"id = "<<id<<std::endl;
      //std::cout<<"msg = "<<msg<<std::endl;
}
