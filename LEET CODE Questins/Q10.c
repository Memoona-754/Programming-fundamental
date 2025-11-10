#include <stdio.h>
#include <stdbool.h>

bool isToeplitz(int m, int n, int mat[m][n]) {
    // Check from row 1 and column 1
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (mat[i][j] != mat[i - 1][j - 1]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int mat[m][n];

    printf("Enter matrix values:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (isToeplitz(m, n, mat)) {
        printf("The matrix is Toeplitz.\n");
    } else {
        printf("The matrix is NOT Toeplitz.\n");
    }

    return 0;
}
