#include <iostream>

using namespace std;

void allocateMatrix(int** &matrix, int rows, int cols) {
    matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }
}

void deallocateMatrix(int** &matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
}

void inputMatrix(int** matrix, int rows, int cols) {
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void multiplyMatrices(int** mat1, int** mat2, int** result, int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter rows and columns for first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> rows2 >> cols2;

    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible with the given dimensions." << endl;
        return 1;
    }

    int** mat1;
    int** mat2;
    int** result;

    allocateMatrix(mat1, rows1, cols1);
    allocateMatrix(mat2, rows2, cols2);
    allocateMatrix(result, rows1, cols2);

    cout << "Input first matrix:" << endl;
    inputMatrix(mat1, rows1, cols1);

    cout << "Input second matrix:" << endl;
    inputMatrix(mat2, rows2, cols2);

    multiplyMatrices(mat1, mat2, result, rows1, cols1, cols2);

    cout << "Resultant matrix after multiplication:" << endl;
    printMatrix(result, rows1, cols2);

    deallocateMatrix(mat1, rows1);
    deallocateMatrix(mat2, rows2);
    deallocateMatrix(result, rows1);

    return 0;
}