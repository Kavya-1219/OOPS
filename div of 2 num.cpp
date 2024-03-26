#include <iostream>
using namespace std;

int main() {
    int integerPart;
    float floatPart, result;

    cout << "Enter an integer: ";
    cin >> integerPart;
    cout << "Enter a float: ";
    cin >> floatPart;

    result = floatPart / integerPart;
    cout << "Result of division is: " << result << endl;

    return 0;
}
