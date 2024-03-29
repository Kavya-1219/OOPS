#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> data;
    int rows, cols;


public:
    Matrix(int rows, int cols) : rows(rows), cols(cols), data(rows, std::vector<int>(cols)) {}


    void input() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cin >> data[i][j];
            }
        }
    }

    
    Matrix operator+(const Matrix &m) const {
        Matrix result(rows, cols);
     for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + m.data[i][j];
            }
        }
        return result;
    }

    
    Matrix operator-(const Matrix &m) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] - m.data[i][j];
            }
        }
        return result;
    }

    
   void display() const {
        for (const auto &row : data) {
            for (int val : row) {
                std::cout << val << " ";
            }
            std::cout << "\n";
        }

    }
};

int main() {
    
    Matrix m1(2, 2), m2(2, 2);
    std::cout << "Enter matrix 1 values:\n";
    m1.input();
    std::cout << "Enter matrix 2 values:\n";
    m2.input();

    Matrix sum = m1 + m2;
    std::cout << "Sum:\n";
    sum.display();

    return 0;
}

