#include <iostream>
#include <stdlib.h>
#include <cassert> // для assert()
#include <initializer_list> // для std::initializer_list



template<class T>
class CBDVArray{
    
    public:	
        CBDVArray(const std::initializer_list<T> &list): CBDVArray(list.size()){
            int count = 0;
            for(auto &it: list){
                array[count] = it;
	        ++count;
	    }

	
	}
        CBDVArray(T length): length(length){
             array = new T[length];
	     printf("constructor init arr length  %d \n", length);
        }

        CBDVArray(){
	    printf("constructor init empty ", length);
	    array = nullptr; 
	}
	int count() const{
            return length;
	}
	~CBDVArray(){
             
	    printf("run destructor \n");
	    delete[] array;
	}

	T& operator[](int index){
              
	    assert(index >=0 && index < length);
            return array[index];

	}
        void Show(){
             for(int i = 0; i < length; ++i){
		     std::cout<<i<< " = "<< array[i]<<std::endl;
	     }
	}
    private:
	int length = 0;
	T* array;


};


int main(int argc, char* argv[]){

    CBDVArray<int> arr1(12);

    CBDVArray<int> arr2({1, 2, 3, 4, 5, 6});
    
    CBDVArray<int>* arr3 = new CBDVArray<int>{1, 2, 3, 4, 5, 6};
    printf("length arr1 %d \n", arr1.count());
    printf("length arr2 %d \n", arr2.count());
    arr2.Show();
    std::cout<<arr2[2]<< std::endl;;

    //std::cout<<arr2[20];
    arr3->Show();

    delete arr3;
    
    CBDVArray<char> arr4 = {'a', 'b', 'c', 'd', 'v'};
    arr4.Show();
    return 1;

}
