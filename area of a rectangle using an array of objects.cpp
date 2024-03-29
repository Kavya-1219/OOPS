#include <iostream>

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    int area() {
        return length * width;
    }
};

int main() {
    const int SIZE = 3;
    Rectangle rectangles[SIZE] = { {2, 3}, {4, 5}, {6, 7} };

    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Area of rectangle " << i+1 << ": " << rectangles[i].area() << std::endl;
    }

    return 0;
}

