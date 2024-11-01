#include <iostream>

// Simple lambda 
int main ()
{
    int number;
   auto square_num = [](float value)-> int {
    return value*value;
    };  

    std::cout << "Enter number of to be squared :";
    std::cin >> number;
    int result = square_num(number);

    std::cout << "The Result : " << result << std::endl;



    return 0;
}