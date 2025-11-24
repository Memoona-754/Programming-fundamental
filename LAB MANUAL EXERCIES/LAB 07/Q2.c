/* Write a C program to read elements in a matrix and check whether matrix is Sparse matrix or 
not. Logic: To check whether a matrix is sparse matrix we only need to check the total number 
of elements that are equal to zero. The matrix is sparse matrix if T ≥ ((m * n) / 2 ) where T defines 
total number of zero elements where m and n are rows and columns respectively. */
#include <stdio.h>
int main() {
    int m, n, i, j, countZero = 0;

    printf("Enter number of rows (m): ");
    scanf("%d", &m);

    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    int matrix[m][n];

    // Input the matrix
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix 
    printf("\nThe entered matrix is:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
             if(matrix[i][j] == 0) {
                countZero++;
            }
        }
        printf("\n");
    }

    // Sparse matrix condition
    if(countZero >= (m * n) / 2) {
        printf("\nThe matrix is a Sparse Matrix.\n");
    } else {
        printf("\nThe matrix is NOT a Sparse Matrix.\n");
    }

    return 0;
}
