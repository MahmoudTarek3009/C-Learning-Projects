#include <iostream>
#include <algorithm>
int main(){

    int arr[] = {2,3,4,6,22,33,11,88,55,77,34,98};
    int target;
    int size= sizeof(arr)/ sizeof(arr[0]) ;

    std::cout<< "Enter number to search in the list: " << std::endl;
    std::cin>>  target;
    


    int *ptr_target_address = std::find(arr , (arr + size), target); // The pointer address will be the address of target in array and "*"" is it value

    int target_index_in_array = (ptr_target_address - arr); //The C++ compiler automatically scales the pointer arithmetic by the size of the pointed-to type.

        // checking if the element found or not
    if (target_index_in_array >= size)
        std::cout << "Element not Found!\n";
    else
        std::cout << "The Number " << target <<" is found in Index: " << target_index_in_array << std::endl;

    
    return  0;



}