#include <iostream>

int main() {
    
    int myInteger = 100;

   
    float myFloat;

    
    myFloat = myInteger; 

    
    std::cout << "Integer value: " << myInteger << std::endl;
    std::cout << "Float value (after implicit conversion): " << myFloat << std::endl;

    return 0;
}

