#include <iostream>
using namespace std;

/* Program to multiply two matrices without OOP */

void inputMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
}

void multiplyMatrices(int A[10][10], int B[10][10], int C[10][10], int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < c1 /* c1 or r2 -> same thing */; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible." << endl;
        return 1;
    }

    cout << "Enter elements of first matrix:\n";
    inputMatrix(A, r1, c1);
    cout << "Enter elements of second matrix:\n";
    inputMatrix(B, r2, c2);

    multiplyMatrices(A, B, C, r1, c1, r2, c2);

    cout << "Resultant matrix:\n";
    displayMatrix(C, r1, c2);

    return 0;
}

// /* Program to multiply two matrices using OOP */

// class Matrix {
// public:
//     int data[10][10];
//     int rows, cols;

//     Matrix(int r, int c) : rows(r), cols(c) {}

//     void inputMatrix() {
//         for (int i = 0; i < rows; ++i) {
//             for (int j = 0; j < cols; ++j) {
//                 cin >> data[i][j];
//             }
//         }
//     }

//     Matrix multiply(Matrix &other) {
//         Matrix result(rows, other.cols);
//         for (int i = 0; i < rows; ++i) {
//             for (int j = 0; j < other.cols; ++j) {
//                 result.data[i][j] = 0;
//                 for (int k = 0; k < cols; ++k) {
//                     result.data[i][j] += data[i][k] * other.data[k][j];
//                 }
//             }
//         }
//         return result;
//     }

//     void display() {
//         for (int i = 0; i < rows; ++i) {
//             for (int j = 0; j < cols; ++j) {
//                 cout << data[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     int r1, c1, r2, c2;

//     cout << "Enter rows and columns of first matrix: ";
//     cin >> r1 >> c1;
//     cout << "Enter rows and columns of second matrix: ";
//     cin >> r2 >> c2;

//     if (c1 != r2) {
//         cout << "Matrix multiplication not possible." << endl;
//         return 1;
//     }

//     Matrix A(r1, c1);
//     Matrix B(r2, c2);

//     cout << "Enter elements of first matrix:\n";
//     A.inputMatrix();
//     cout << "Enter elements of second matrix:\n";
//     B.inputMatrix();

//     Matrix C = A.multiply(B);
//     cout << "Resultant matrix:\n";
//     C.display();

//     return 0;
// }
