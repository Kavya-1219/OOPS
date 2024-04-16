#include <iostream>
using namespace std;

int main() {
    string str = "Hello, world!"; 
    string *ptr = &str; 
    cout << "Value of str: " << *ptr << endl; 

    return 0;
}
