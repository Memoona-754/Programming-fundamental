#include <stdio.h>

int surfaceArea(int grid[][50], int n) {
    int area = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            int v = grid[i][j];
            if (v > 0) {
                // Top + Bottom faces
                area += 2;

                // Four sides
                // Up
                int up = (i > 0) ? grid[i-1][j] : 0;
                area += (v > up) ? (v - up) : 0;

                // Down
                int down = (i < n-1) ? grid[i+1][j] : 0;
                area += (v > down) ? (v - down) : 0;

                // Left
                int left = (j > 0) ? grid[i][j-1] : 0;
                area += (v > left) ? (v - left) : 0;

                // Right
                int right = (j < n-1) ? grid[i][j+1] : 0;
                area += (v > right) ? (v - right) : 0;
            }
        }
    }

    return area;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int grid[50][50];
    printf("Enter grid values:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    int result = surfaceArea(grid, n);
    printf("Total Surface Area = %d\n", result);

    return 0;
}
