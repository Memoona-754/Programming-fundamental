#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows of Matrix A: ");
    if (scanf("%d", &r1) != 1) {   // validation
        printf("Invalid Input! Only integers allowed.\n");
        return 0;
    }

    printf("Enter columns of Matrix A: ");
    if (scanf("%d", &c1) != 1) {
        printf("Invalid Input! Only integers allowed.\n");
        return 0;
    }

    printf("Enter rows of Matrix B: ");
    if (scanf("%d", &r2) != 1) {
        printf("Invalid Input! Only integers allowed.\n");
        return 0;
    }

    printf("Enter columns of Matrix B: ");
    if (scanf("%d", &c2) != 1) {
        printf("Invalid Input! Only integers allowed.\n");
        return 0;
    }

    // multiplication possible check
    if (c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    int A[50][50], B[50][50], R[50][50];

    // Input Matrix A
    printf("\nEnter elements of Matrix A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {

            printf("A[%d][%d]: ", i, j);
            if (scanf("%d", &A[i][j]) != 1) {   // validation
                printf("Invalid Input! Only integers allowed.\n");
                return 0;
            }

        }
    }

    // Input Matrix B
    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {

            printf("B[%d][%d]: ", i, j);
            if (scanf("%d", &B[i][j]) != 1) {   // validation
                printf("Invalid Input! Only integers allowed.\n");
                return 0;
            }

        }
    }

    // Multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            R[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                R[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Result print
    printf("\nResultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }

    return 0;
}