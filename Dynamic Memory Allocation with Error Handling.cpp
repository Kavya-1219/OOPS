#include <iostream>

int main() {
    int size;
    std::cout << "Enter number of elements: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Invalid size." << std::endl;
        return 1;
    }

    int* array = new int[size];

    std::cout << "Enter " << size << " integers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    std::cout << "You entered: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    delete[] array;
}

