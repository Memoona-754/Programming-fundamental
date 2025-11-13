#include <stdio.h>
#define MAX 10

void readMatrix(int mat[MAX][MAX], int row, int col) {
    printf("Enter matrix elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}
void printMatrix(int mat[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply matrices
void multiplyMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int res[MAX][MAX], int row1, int col1, int row2, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[MAX][MAX], mat2[MAX][MAX], res[MAX][MAX];
    int row1, col1, row2, col2;

    printf("Enter rows and columns of matrix 1: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter rows and columns of matrix 2: ");
    scanf("%d %d", &row2, &col2);

    if (col1 != row2) {
        printf("Matrix multiplication not possible\n");
        return 1;
    }

    printf("Matrix 1:\n");
    readMatrix(mat1, row1, col1);
    printf("Matrix 2:\n");
    readMatrix(mat2, row2, col2);

    multiplyMatrices(mat1, mat2, res, row1, col1, row2, col2);

    printf("Resultant matrix:\n");
    printMatrix(res, row1, col2);

    return 0;
}