#include <iostream>
#include <algorithm>
#include <initializer_list>

int main (){
int x, y, z;
std::cout << "enter 3 values"<< std::endl;
std::cin >>x >> y >> z ;

int max = std::max({x,y,z});
std::cout << "The Greatest Value = ";
std::cout << std::max({x,y,z}) << std::endl;
}