#include <iostream>
#include <algorithm>

// Sort with Lambda: Use lambda functions to sort an array of integers in ascending and descending order.

int main ()
{

    int arr[]={1,8,4,3,2,9,0,5,7};
    int size_arr = sizeof(arr) / sizeof(arr[0]);

    auto acc_compare_values = [] (int value_1 ,int value_2)-> int
    {
        return value_1 < value_2;
    };

    auto dec_compare_values = [] (int value_1 ,int value_2)-> int
    {
        return value_1 > value_2;
    };

    std::sort(arr , (arr + size_arr) , acc_compare_values);
    std::cout<< "Values sorted in acsending order : " << std::endl;
    for (int  i :  arr)
    {
        std::cout<< i << ",";
    }

    std::cout<< std::endl;

    std::sort(arr , (arr + size_arr) , dec_compare_values);
    std::cout<< "Values sorted in Decending order : " << std::endl;
    for (int  i :  arr)
    {
        std::cout<< i << ",";
    }
    std::cout<< std::endl;
    return 0;
}