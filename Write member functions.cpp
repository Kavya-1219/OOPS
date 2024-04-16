#include <iostream>
#include<cmath>
using namespace std;

class Shape {
protected:
    float height;
    float width;
public:
    Shape(float h, float w) : height(h), width(w) {}
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(float h, float w) : Shape(h, w) {}
    float area() override {
        return height * width;
    }
    float perimeter() override {
        return 2 * (height + width);
    }
};

class Triangle : public Shape {
public:
    Triangle(float h, float w) : Shape(h, w) {}
    float area() override {
        return 0.5 * height * width;
    }
    float perimeter() override {
        
        return 2 * width + height * sqrt(2);
    }
};

int main() {
    Rectangle rect(5, 10);
    Triangle tri(4, 6);

    cout << "Rectangle Area: " << rect.area() << ", Perimeter: " << rect.perimeter() << endl;
    cout << "Triangle Area: " << tri.area() << ", Perimeter: " << tri.perimeter() << endl;

    return 0;
}
