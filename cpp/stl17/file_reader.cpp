#include <iostream>
/*
 * Resource Acquisition Is Initialization
 * (RAII)
 *
 */

class CFileReader{
    FILE *m_file;

    public:
         CFileReader(const char* file_name): m_file{fopen(file_name, "rb")}{

             if (m_file == 0){
                 throw std::runtime_error("Unable open file");
	     }
	     else{
                 // todo
	     }

	 }

	 ~CFileReader(){

             fclose(m_file);
	     std::clog << "hello from destructor\n";

	 }

};




int main(int argc, char* argv[]){

    if (argc < 2){
        std::cout<<"run with params <file_name>"<<std::endl;
    }
    try{
	if (argc >= 2)    
           CFileReader c1(argv[1]);
        
    }
    catch(const std::exception &ex){
	    std::cout<< "exception: "<< ex.what()<<'\n' ;
    }

    return 1;

}
