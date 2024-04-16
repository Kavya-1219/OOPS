#include <iostream>
using namespace std;

void myFunction() {
    throw "Exception occurred";
}

int main() {
    try {
        myFunction();
    } 
    catch (const char* e) {
        cout << "Exception caught: " << e << endl;
    }

    return 0;
}
