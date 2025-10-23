#include <stdio.h>
int main() {
    int r1, c1, r2, c2;

    // Input size of first matrix
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    // Input size of second matrix
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Check multiplication rule
    if (c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        printf("Rule: Columns of A must be equal to Rows of B.\n");
        return 0;
    }
    // Declare matrices
    int A[r1][c1], B[r2][c2], C[r1][c2];
    // Input elements of Matrix A
    printf("\nEnter elements of Matrix A (%dx%d):\n", r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    // Input elements of Matrix B
    printf("\nEnter elements of Matrix B (%dx%d):\n", r2, c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    // Initialize and calculate Matrix C
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    // Display Resultant Matrix
    printf("\nResultant Matrix (A x B):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}