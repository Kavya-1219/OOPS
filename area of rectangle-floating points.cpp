
#include <iostream>
using namespace std;

int main() {
    float length, width, area;

    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;

    area = length * width;
    cout << "Area of the rectangle is: " << area << endl;

    return 0;
}

