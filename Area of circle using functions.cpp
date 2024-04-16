#include <iostream>
double calculateArea(double radius) {
    return 3.14159 * radius * radius;
}
int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    double area = calculateArea(radius);
    std::cout << "Area of the circle: " << area << std::endl;
    return 0;
}
