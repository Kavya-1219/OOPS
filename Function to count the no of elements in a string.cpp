#include <iostream>
using namespace std;


int countElements(const string& str) {
    return str.length();
}

int main() {
    string myString = "Hello, World!";
    int count = countElements(myString);
    cout << "Number of elements in the string: " << count << endl;
    return 0;
}
