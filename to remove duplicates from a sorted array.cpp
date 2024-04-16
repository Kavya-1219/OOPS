#include <iostream>
#include <vector>

void removeDuplicates(std::vector<int>& arr) {
    if (arr.empty())
        return;
    int index = 0;
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[index] != arr[i])
            arr[++index] = arr[i];
    }
    arr.resize(index + 1);
}

int main() {
    int arrData[] = {1, 1, 2, 2, 3, 4, 4, 5};
    std::vector<int> arr(arrData, arrData + sizeof(arrData) / sizeof(arrData[0]));
    removeDuplicates(arr);
    for (size_t i = 0; i < arr.size(); ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    return 0;
}


