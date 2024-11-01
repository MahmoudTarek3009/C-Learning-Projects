#include <iostream>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};

    int size_arr1 = sizeof(arr1) / sizeof(arr1[0]);
    int size_arr2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[size_arr1 + size_arr2];

    // Copy elements from arr1 to arr3
    for (int i = 0; i < size_arr1; ++i) {
        arr3[i] = arr1[i];
    }

    // Copy elements from arr2 to arr3
    for (int i = 0; i < size_arr2; ++i) {
        arr3[size_arr1 + i] = arr2[i];
    }

    // Print the concatenated array
    std::cout << "Concatenated array: ";
    for (int i = 0; i < size_arr1 + size_arr2; ++i) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}