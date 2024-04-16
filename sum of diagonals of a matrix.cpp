#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int> > matrix(3, std::vector<int>(3));
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 3;
    matrix[1][0] = 4;
    matrix[1][1] = 5;
    matrix[1][2] = 6;
    matrix[2][0] = 7;
    matrix[2][1] = 8;
    matrix[2][2] = 9;
    
    int sumDiagonal1 = 0, sumDiagonal2 = 0;
    for (size_t i = 0; i < matrix.size(); ++i) {
        sumDiagonal1 += matrix[i][i];
        sumDiagonal2 += matrix[i][matrix.size() - i - 1];
    }
    
    std::cout << "Sum of diagonal 1: " << sumDiagonal1 << std::endl;
    std::cout << "Sum of diagonal 2: " << sumDiagonal2 << std::endl;
    
    return 0;
}



