#include <stdio.h>
// Function declarations
int inputDimensions(int *r1, int *c1, int *r2, int *c2);
void inputMatrix(int matrix[10][10], int rows, int cols, char name);
void multiplyMatrix(int a[10][10], int b[10][10], int c[10][10], int r1, int c1, int r2, int c2);
void printMatrix(int matrix[10][10], int rows, int cols);

int main() {
    int r1, c1, r2, c2;

    // Step 1: Input dimensions and check multiplication possibility
    if (!inputDimensions(&r1, &c1, &r2, &c2)) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    // Step 2: Input matrices
    int a[10][10], b[10][10], c[10][10];
    inputMatrix(a, r1, c1, 'A');
    inputMatrix(b, r2, c2, 'B');

    // Step 3: Multiply matrices
    multiplyMatrix(a, b, c, r1, c1, r2, c2);

    // Step 4: Print result
    printMatrix(c, r1, c2);

    return 0;
}
// Function to input matrix dimensions and check compatibility
int inputDimensions(int *r1, int *c1, int *r2, int *c2) {
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", r1, c1);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", r2, c2);

    if (*c1 != *r2)
        return 0; // multiplication not possible
    return 1; // possible
}
// Function to input elements into a matrix
void inputMatrix(int matrix[10][10], int rows, int cols, char name) {
    printf("\nEnter elements of Matrix %c (%dx%d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c[%d][%d] = ", name, i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}
// Function to multiply two matrices
void multiplyMatrix(int a[10][10], int b[10][10], int c[10][10], int r1, int c1, int r2, int c2) {
    // Initialize result matrix to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            c[i][j] = 0;
        }
    }
    // Matrix multiplication logic
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
// Function to print a matrix
void printMatrix(int matrix[10][10], int rows, int cols) {
    printf("\nResultant Matrix (A x B):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%5d ", matrix[i][j]);
        }
        printf("\n");
    }
}
