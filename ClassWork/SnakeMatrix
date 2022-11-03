#include <iostream>

int main() {
    int rows, cols, dls = 0;
    std::cout << "Input rows: ";
    std::cin >> rows;
    std::cout << "Input cols: ";
    std::cin >> cols;
    std::cout << "Input dls: ";
    std::cin >> dls;

    int **matrix = new int *[rows];

    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    int iter = 1;
    if (dls == 0) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
//          (i % 2 == 0) ? matrix[i][j] = iter : matrix[i][cols - j - 1] = iter;
                if (i % 2 == 0)
                    matrix[i][j] = iter;
                else
                    matrix[i][cols - j - 1] = iter;

                ++iter;
            }
        }
    } else {
        for (int i = 0; i < cols; ++i) {
            for (int j = 0; j < rows; ++j) {
                if (i % 2 == 0)
                    matrix[j][i] = iter;
                else
                    matrix[rows - j - 1][i] = iter;

                ++iter;
            }
        }
    }

    std::cout << std::endl << "Snake matrix: " << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
