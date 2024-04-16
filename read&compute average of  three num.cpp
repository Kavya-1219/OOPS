#include <iostream>

int main() {
    int num1, num2, num3;
    std::cout << "Enter three integers: ";
    std::cin >> num1 >> num2 >> num3;

    double average = (num1 + num2 + num3) / 3.0;

    std::cout << "Average of the three numbers: " << average << std::endl;

    return 0;
}

