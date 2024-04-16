#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int> > data;
public:
    Matrix(int rows, int cols) : data(rows, std::vector<int>(cols)) {}

    void setElement(int row, int col, int value) {
        data[row][col] = value;
    }

    int getElement(int row, int col) const {
        return data[row][col];
    }
};

int main() {
    Matrix mat(3, 3);
    mat.setElement(0, 0, 1);
    mat.setElement(0, 1, 2);
    mat.setElement(0, 2, 3);
    std::cout << "Element at (0, 0): " << mat.getElement(0, 0) << std::endl;
    return 0;
}


