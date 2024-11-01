// Fill array sequintial without for loop and then sum
#include <iostream>
#include <array>
#include <numeric>
int main ()
    {
        std::array<int,10000> arr;
        std::iota(arr.begin(), arr.end(), 10); // start and end and first value 
        

    // Print Using a range-based for loop
    for(const int& element : arr) {
        std::cout << element << " ";
    }
    std::cout << std::endl;


    std::cout <<" Summation equal to : "<<  std::endl;

    int sum = std::accumulate(std::begin(arr),std::end(arr),0); // begin of array, and end of array , and initial summation value
    std::cout << sum <<  std::endl;
        return 0;
    }

