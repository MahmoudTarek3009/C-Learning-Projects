//check if character is a digit
#include <iostream>
#include <cctype>


int main(){

    char x=0;
    std::cout<< "Enter an character" << std::endl;
    std::cin >> x;
    
    if (isdigit(static_cast<unsigned char>(x)))//return 1 if digit and zero if not
    {
       std::cout<< "It is a digit" << std::endl; 
 
    }
    else
    {
         std::cout<< "It is  not  a digit" << std::endl; 
         
    }

    return 0;
}
