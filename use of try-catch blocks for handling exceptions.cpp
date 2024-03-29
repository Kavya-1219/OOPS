#include <iostream>

int main() {
    try {
        
        int x = 10, y = 0;
        if (y == 0)
            throw "Division by zero exception";
        int result = x / y;
        std::cout << "Result: " << result << std::endl;
    } catch (const char* msg) {
        std::cerr << "Exception caught: " << msg << std::endl;
    }
    return 0;
}

