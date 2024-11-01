#include <iostream>
#include <algorithm>

// Maximum Value in Array
int main(){

    int arr[]={2,3,4,5,6,99,33,44,377,'a',66,11};

    int size= sizeof(arr)/ sizeof(arr[0]) ;

    int *ptr_to_max = std::max_element(arr , (arr + size) );


    std::cout << "Max Element is " << *ptr_to_max <<std::endl;

    return 0;
}