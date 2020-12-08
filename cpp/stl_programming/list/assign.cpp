#include <list>
#include <iostream>
 
int main(int argc, char* argv[])
{
    std::list<char> characters;
    auto count = 0;
    if (argc > 1) 
        count = atoi(argv[1]);
    else 
        count = 1;	    
    std::cout<<"count = "<<count<<std::endl;
    auto print_list = [&](){
        for (char c : characters)
            std::cout << c << ' ';
        std::cout << '\n';  
    };
 
    characters.assign(count, 'H');
    print_list();
 
    {
        std::list<char> extra(count, 'b');
        characters.assign(extra.begin(), extra.end());
    }
    print_list();
 
    characters.assign({'C', '+', '+', '1', '1'});
    print_list();
}
