#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int img[m][n], smooth[m][n];

    // Input image matrix
    printf("Enter the image matrix (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &img[i][j]);
        }
    }

    // Apply 3x3 smoothing filter
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            int sum = 0, count = 0;

            // Check neighbors in the 3x3 grid
            for (int x = i - 1; x <= i + 1; x++) {
                for (int y = j - 1; y <= j + 1; y++) {

                    // Accept only valid neighbors
                    if (x >= 0 && x < m && y >= 0 && y < n) {
                        sum += img[x][y];
                        count++;
                    }
                }
            }

            // Floor of the average
            smooth[i][j] = sum / count;
        }
    }

    // Print smoothed image
    printf("\nSmoothed Image:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", smooth[i][j]);
        }
        printf("\n");
    }

    return 0;
}
