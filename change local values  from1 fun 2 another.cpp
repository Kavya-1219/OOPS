#include <iostream>

void modifyValues(int *a, int *b) {
    *a = 20;
    *b = 30;
}

int main() {
    int x = 10, y = 15;
    std::cout << "Before modification - x: " << x << ", y: " << y << std::endl;
    modifyValues(&x, &y);
    std::cout << "After modification - x: " << x << ", y: " << y << std::endl;

    return 0;
}

