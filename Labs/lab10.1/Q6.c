#include <stdio.h>

// Function declarations
void inputMatrix(int a[10][10], int r, int c, char name);
void addMatrix(int a[10][10], int b[10][10], int sum[10][10], int r, int c);
void transposeMatrix(int a[10][10], int t[10][10], int r, int c);
void printMatrix(int a[10][10], int r, int c);

int main() {
    int r, c;

    // Input dimensions
    printf("Enter rows and columns for matrices: ");
    scanf("%d %d", &r, &c);

    int a[10][10], b[10][10], sum[10][10], t[10][10];

    // Input matrices
    inputMatrix(a, r, c, 'A');
    inputMatrix(b, r, c, 'B');

    // Add matrices
    addMatrix(a, b, sum, r, c);

    // Transpose of the sum matrix
    transposeMatrix(sum, t, r, c);

    // Output
    printf("\nMatrix A:\n");
    printMatrix(a, r, c);

    printf("\nMatrix B:\n");
    printMatrix(b, r, c);

    printf("\nSum (A + B):\n");
    printMatrix(sum, r, c);

    printf("\nTranspose of Sum matrix:\n");
    printMatrix(t, c, r);

    return 0;
}

void inputMatrix(int a[10][10], int r, int c, char name) {
    printf("\nEnter elements of Matrix %c:\n", name);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%c[%d][%d] = ", name, i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
}

void addMatrix(int a[10][10], int b[10][10], int sum[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

void transposeMatrix(int a[10][10], int t[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            t[j][i] = a[i][j];
        }
    }
}

void printMatrix(int a[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }
}