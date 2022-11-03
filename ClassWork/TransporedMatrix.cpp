#include <iostream>

int main(){
   int rows, cols;
    std::cout << "Input rows: ";
    std::cin >> rows;
    std::cout << "Input cols: ";
    std::cin >> cols;

    int **matrix = new int *[rows];
    int iter = 1;
    for (int i = 0; i < cols; ++i) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = iter;
            ++iter;
        }
    }

    std::cout << std::endl << "Source matrix: " << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    //Транспонирование
    int **matrix_t = new int *[cols];
    for (int i = 0; i < cols; ++i) {
        matrix_t[i] = new int[rows];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix_t[j][i] = matrix[i][j];
        }
    }

    std::cout << std::endl << "Transposed matrix:" << std::endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            std::cout << matrix_t[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
