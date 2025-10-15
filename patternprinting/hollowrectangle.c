#include <stdio.h>

int main() {
    int rows, columns;
    // Ask user for size
    printf("Enter number of rows and columns (e.g. 5 6): ");
    if (scanf("%d %d", &rows, &columns) != 2) return 0;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            // Print star on the border (first/last row or first/last column)
            if (i == 1 || i == rows || j == 1 || j == columns)
                printf("*");
            else
                printf(" ");   // space for hollow part

            // optional space to make rectangle look wider (remove if you want compact)
            if (j != columns) printf(" ");
        }
        printf("\n");
    }
    return 0;
}