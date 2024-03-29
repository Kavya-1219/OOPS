
#include <iostream>
using namespace std;

template <typename T>
T findMax(T arr[], int size) {
    T max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    float floatArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double doubleArray[] = {1.11, 2.22, 3.33, 4.44, 5.55};

    cout << "Max of intArray: " << findMax(intArray, 5) << endl;
    cout << "Max of floatArray: " << findMax(floatArray, 5) << endl;
    cout << "Max of doubleArray: " << findMax(doubleArray, 5) << endl;

    return 0;
}

