#include <iostream>

class Largest {
private:
    int a, b;

public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    friend void find_Max(Largest obj);
};

void find_Max(Largest obj) {
    if (obj.a > obj.b)
        std::cout << "Maximum number is: " << obj.a << std::endl;
    else
        std::cout << "Maximum number is: " << obj.b << std::endl;
}

int main() {
    Largest obj;
    int num1, num2;
    std::cout << "Enter the first no: ";
    std::cin >> num1;
    std::cout << "Enter the second no: ";
    std::cin >> num2;
    obj.setData(num1, num2);
    find_Max(obj);
    return 0;
}

