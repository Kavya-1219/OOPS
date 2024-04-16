#include <iostream>
using namespace std;

int main() {
    float num = 3.14f; 
    float *ptr = &num; 

    cout << "Value of num: " << *ptr << endl; 
    return 0;
}
