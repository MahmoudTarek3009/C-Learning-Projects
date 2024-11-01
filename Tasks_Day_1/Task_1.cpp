#include <iostream>
#include <iomanip>


int main (){


std::cout<< "ASCII Code Table:" << std::endl;
std::cout<< "+------+--------+" << std::endl;
std::cout<< "| Char | ASCII |" << std::endl;
std::cout<< "+------+-------+" << std::endl;



 for (int i = 0; i <= 255; i++) {
         std::cout << "| ";
         if (std::isprint(i)) {
            std::cout << std::setw(4) << static_cast<char>(i);
        } else {
            std::cout << std::setw(4) << ' ';
        }

        std::cout << " | " << std::setw(5) << i << " |" << std::endl;
    }

    

    std::cout << "+------+-------+" << std::endl;

    return 0;
}