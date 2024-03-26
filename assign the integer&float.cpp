#include <iostream>

int main() {
    // Declare an integer variable
    int myInteger = 100;

    // Declare a float variable
    float myFloat;

    // Assign the integer variable to the float variable
    // This will implicitly convert the integer to a float
    myFloat = myInteger;

    // Output the values to verify the assignment and conversion
    std::cout << "Integer value: " << myInteger << std::endl;
    std::cout << "Float value (after assignment): " << myFloat << std::endl;

    return 0;
}

