#include <iostream>
using namespace std;

int main() {
    char ch = 'A'; 
    char *ptr = &ch; 
    cout << "Value of ch: " << *ptr << endl; 
    return 0;
}
