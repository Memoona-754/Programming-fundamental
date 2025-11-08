/* Write a program which takes a matrix of any size as user input and returns the maximum element 
of matrix as output. Your code should also show the entered matrix on the screen.*/
#include <stdio.h>
int main() {
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // Input matrix
    printf("\nEnter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display matrix
    printf("\nThe entered matrix is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Find maximum element
    int max = matrix[0][0];
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    printf("\nMaximum element in the matrix: %d\n", max);

    return 0;
}
