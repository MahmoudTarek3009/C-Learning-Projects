#include <iostream>
#include <bitset>

int main ()
{
    int x;
    std::string z;

    std::cout << "Enter Decimal Number : ";
    std::cin>> x ;
    

    std::bitset<8> y(x);

    std::cout << "Binary Representation: " << y <<std::endl;

    std::cout << "Enter Binary Number : ";
    std::cin>> z ;

    std::bitset<8> bitset(z);
    x =static_cast<int>(bitset.to_ulong());

    std::cout << "Decimal Representation: " << x <<std::endl;



}