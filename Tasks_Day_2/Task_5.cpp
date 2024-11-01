#include <iostream>
//ﬁnd the even and odd numbers in the array
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size_arr1 = sizeof(arr1) / sizeof(arr1[0]);
   
    int arr_even[size_arr1], arr_odd[size_arr1];
    int odd_counter = 0, even_counter = 0;
     
    for (int i = 0; i < size_arr1; i++) {
        if (arr1[i] & 1) {
            arr_odd[odd_counter] = arr1[i];
            odd_counter++;
        } else {
            arr_even[even_counter] = arr1[i];
            even_counter++;
        } 
    }

    std::cout << "Odd Array: ";
    for (int i = 0; i < odd_counter; i++) {
        std::cout << arr_odd[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Even Array: ";
    for (int i = 0; i < even_counter; i++) {
        std::cout << arr_even[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
