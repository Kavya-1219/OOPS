#include <iostream>
using namespace std;

template<typename T>
T findMax(T arr[], int size) {
    T max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arrInt[] = {1, 3, 5, 7, 9};
    cout << "Max in int array: " << findMax(arrInt, 5) << endl;

    float arrFloat[] = {2.2f, 4.4f, 6.6f, 8.8f, 10.1f};
    cout << "Max in float array: " << findMax(arrFloat, 5) << endl;

    double arrDouble[] = {3.1, 6.2, 9.3, 12.4, 15.5};
    cout << "Max in double array: " << findMax(arrDouble, 5) << endl;

}
