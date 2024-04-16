#include <iostream>
using namespace std;

int main() {
    try {
        try {
            
            throw 20;
        } 
        catch (int e) {
            cout << "Inner catch block: Exception caught: " << e << endl;
        }
    } 
    catch (...) {
        cout << "Outer catch block: Exception caught." << endl;
    }

    return 0;
}
