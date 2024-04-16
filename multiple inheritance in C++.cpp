#include <iostream>

class A {
public:
    int a;
};

class B {
public:
    int b;
};

class C : public A, public B {
public:
    int c;
};

int main() {
    C obj;
    obj.a = 10;
    obj.b = 20;
    obj.c = 30;

    std::cout << "Value of a: " << obj.a << std::endl;
    std::cout << "Value of b: " << obj.b << std::endl;
    std::cout << "Value of c: " << obj.c << std::endl;

    return 0;
}

