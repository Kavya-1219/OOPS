
#include <iostream>
#include <cmath>
using namespace std;


float area(float radius) {
    return M_PI * radius * radius; 
}

float area(float length, float width) {
    return length * width;
}

float area(float a, float b, float c) {
    float s = (a + b + c) / 2; 
    return sqrt(s * (s - a) * (s - b) * (s - c)); 
}

int main() {
   
    return 0;
}

