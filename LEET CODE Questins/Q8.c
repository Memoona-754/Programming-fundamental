#include <stdio.h>

int main() {
    int m, n, r, c;

    printf("Enter rows and columns of original matrix (m n): ");
    scanf("%d %d", &m, &n);

    int mat[100][100];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    printf("Enter desired rows and columns (r c): ");
    scanf("%d %d", &r, &c);

    // Check if reshape is possible
    if (m * n != r * c) {
        printf("Reshape not possible. Outputting original matrix:\n");
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++)
                printf("%d ", mat[i][j]);
            printf("\n");
        }
        return 0;
    }

    // Reshape is possible; create new matrix
    int reshaped[100][100];

    int row = 0, col = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            reshaped[row][col] = mat[i][j];
            col++;

            if (col == c) {
                col = 0;
                row++;
            }
        }
    }

    printf("Reshaped matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", reshaped[i][j]);
        printf("\n");
    }

    return 0;
}
