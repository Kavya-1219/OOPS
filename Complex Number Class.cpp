
#include <iostream>
using namespace std;

class Complex {
public:
    float real;
    float imag;

    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    Complex operator + (Complex const &obj) {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }

    Complex operator - (Complex const &obj) {
        Complex result;
        result.real = real - obj.real;
        result.imag = imag - obj.imag;
        return result;
    }

    void display() {
        cout << real << " + i" << imag << endl;
    }
};

int main() {
    Complex c1(12, 7), c2(6, 7);
    Complex c3 = c1 + c2; 
    Complex c4 = c1 - c2; 
    
    cout << "Addition of the complex numbers is: ";
    c3.display();
    cout << "Subtraction of the complex numbers is: ";
    c4.display();

    return 0;
}

