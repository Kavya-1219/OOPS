#include <iostream>
using namespace std;

int main() {
    try {
        
        throw 20;
    } 
    catch (int e) {
        cout << "Exception caught: " << e << endl;
    } 
    
    cout << "Finally block executed." << endl;

    return 0;
}
