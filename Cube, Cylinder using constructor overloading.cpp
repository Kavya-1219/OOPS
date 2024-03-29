#include <iostream>

class Shape {
public:
    virtual double volume() = 0; 
};

class Cube : public Shape {
private:
    double side;
public:
    Cube(double s) : side(s) {}

    double volume() override {
        return side * side * side;
    }
};

class Cylinder : public Shape {
private:
    double radius;
    double height;
public:
    Cylinder(double r, double h) : radius(r), height(h) {}

    double volume() override {
        return 3.14159 * radius * radius * height;
    }
};

int main() {
    Cube cube(3);
    Cylinder cylinder(2, 5);

    std::cout << "Volume of Cube: " << cube.volume() << std::endl;
    std::cout << "Volume of Cylinder: " << cylinder.volume() << std::endl;

    return 0;
}

