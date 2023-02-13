#include <stdio.h>

void addMatrices(int A[][3], int B[][3], int C[][3], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}