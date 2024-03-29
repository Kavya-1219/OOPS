#include <iostream>

int main() {
    int n = 5; 
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j < i * 2; ++j)
            std::cout << j;
        for (int j = i * 2 - 2; j >= i; --j)
            std::cout << j;
        std::cout << std::endl;
    }

    return 0;
}

