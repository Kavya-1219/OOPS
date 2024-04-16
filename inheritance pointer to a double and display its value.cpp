#include <iostream>
using namespace std;

int main() {
    double num = 3.14; 
    double *ptr = &num; 

    cout << "Value of num: " << *ptr << endl; 

    return 0;
}
