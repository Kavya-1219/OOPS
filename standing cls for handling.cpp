 #include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
       
        throw runtime_error("Custom exception occurred");
    } 
    catch (exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
