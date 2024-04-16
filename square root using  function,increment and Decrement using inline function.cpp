#include <iostream>
#include <cmath>

void findSquareRoot(double num) {
    if (num < 0)
        throw "Cannot find square root of negative number";
    std::cout << "Square root of " << num << " is: " << sqrt(num) << std::endl;
}

inline void incrementDecrement(int& num) {
    ++num; 
    --num; 
}

int main() {
    try {
        findSquareRoot(25);
        int x = 10;
        incrementDecrement(x);
        std::cout << "Number after increment and decrement: " << x << std::endl;
    } catch (const char* msg) {
        std::cerr << "Exception caught: " << msg << std::endl;
    }
    return 0;
}

