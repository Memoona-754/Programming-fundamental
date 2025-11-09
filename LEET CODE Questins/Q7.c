#include <stdio.h>

int islandPerimeter(int grid[][100], int rows, int cols) {
    int perimeter = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            if (grid[i][j] == 1) {
                perimeter += 4;

                if (i > 0 && grid[i - 1][j] == 1)
                    perimeter -= 1;

                if (i < rows - 1 && grid[i + 1][j] == 1)
                    perimeter -= 1;

                if (j > 0 && grid[i][j - 1] == 1)
                    perimeter -= 1;

                if (j < cols - 1 && grid[i][j + 1] == 1)
                    perimeter -= 1;
            }
        }
    }

    return perimeter;
}

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int grid[100][100];

    printf("Enter the grid values (0 and 1):\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &grid[i][j]);

    int result = islandPerimeter(grid, rows, cols);

    printf("The perimeter of the island is: %d\n", result);

    return 0;
}
