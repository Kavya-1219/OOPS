#include <iostream>
using namespace std;

int main() {
    char arr[] = {'H', 'e', 'l', 'l', 'o', '!'};
    char *ptr = arr;

    cout << "Values of arr using pointer: ";
    for (int i = 0; i < 6; ++i) {
        cout << *(ptr + i);
    }
    cout << endl;

    return 0;
}
