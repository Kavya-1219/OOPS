
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    if (num2 == 0)
        cout << "Error: Division by zero is not allowed." << endl;
    else
        cout << "Result of division is: " << static_cast<double>(num1) / num2 << endl;

    return 0;
}

