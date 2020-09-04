#include <iostream>


class CFileWriter{
    FILE* m_file;
    size_t f_size;
    public:
        CFileWriter(const char* file_name, size_t file_size): 
	    m_file{fopen(file_name, "wb")}, 
	    f_size(file_size) 
        {
            if (m_file == 0){
                throw std::runtime_error("unable open file");
	    }
	    else{
                writeData();
	    }
        }

        void writeData(){
	     int size = 0;
             int value = 1;	 
	     while(size <= f_size){
                  fwrite(&value, sizeof(int), 1, m_file);
                  size += sizeof(int);
	     }
         
        }
     
        ~CFileWriter(){
	      fclose(m_file);
	      std::clog << "file close"<< std::endl;
        }


};




int main(int argc, char* argv[]){

    CFileWriter* obj_fw = new CFileWriter("test", 20000000); 


}
