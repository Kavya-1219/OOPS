
#include <iostream>

void myCallbackFunction() {
    std::cout << "Callback function called" << std::endl;
}

void registerCallback(void (*callback)()) {
    std::cout << "Registering callback." << std::endl;
    callback();
}

int main() {
    registerCallback(myCallbackFunction);
    return 0;
}

