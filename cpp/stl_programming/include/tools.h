#include <iostream>
#include <stdlib.h>



namespace TOOLS{

    
    template<typename T>
    void  print_container(T stl_container ){
        int i = 0;
        for(auto it: stl_container){
            std::cout<<it<<std::endl;
	}
    
    }
}



