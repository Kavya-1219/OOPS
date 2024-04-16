#include <iostream>
using namespace std;

class MyException: public exception {
    virtual const char* what() const throw() {
        return "My custom exception occurred";
    }
} myex;

int main() {
    try {
        throw myex;
    } 
    catch (exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
