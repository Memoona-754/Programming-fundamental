/* You taking a square matrix as input from keyboard and then you transpose the same matrix after 
meeting the requirements you are also interested to find out whether original Matrix A and 
transpose of Matrix A are equal are not. If the answer is yes, then you print the matrix along with 
message “matrix is symmetric” otherwise you print the “matrix is asymmetric”.   
*/

#include <stdio.h>
int main() {
    int n, i, j, symmetric = 1;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int A[n][n], T[n][n];

    // Input matrix A
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Create transpose T
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            T[j][i] = A[i][j];
        }
    }

    // Compare A and T
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(A[i][j] != T[i][j]) {
                symmetric = 0;
                break;
            }
        }
        if(!symmetric) break;
    }

    // Output
    printf("\nOriginal Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    if(symmetric) {
        printf("\nMatrix is symmetric.\n");
    } else {
        printf("\nMatrix is asymmetric.\n");
    }

    return 0;
}
