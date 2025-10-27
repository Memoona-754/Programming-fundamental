#include <stdio.h>

// Function to calculate the sum of the sub-rectangle
long long findRectangleSum(int rows, int cols, int a[rows][cols], 
                           int l1, int r1, int l2, int r2) {
    long long sum = 0;
    int i, j;

    // Outer loop iterates through the rows from l1 to l2
    for (i = l1; i <= l2; i++) {
        // Inner loop iterates through the columns from r1 to r2
        for (j = r1; j <= r2; j++) {
            sum += a[i][j];
        }
    }
    
    return sum;
}

int main() {
    // Example matrix (dimensions 4x5 for n=4, m=5)
    // The image seems to show a 5x5 matrix if the index goes up to 4,
    // but the array definition a[m][n] suggests m rows, n columns. 
    // Let's use a 4x5 matrix for this example for clarity (4 rows, 5 columns)
    // The indices are 0 to 3 for rows, and 0 to 4 for columns.
    int n = 4; // number of rows (l-coordinate range)
    int m = 5; // number of columns (r-coordinate range)
    int matrix[4][5] = {
        {1, 3, 5, 1, 8},
        {8, 3, 5, 3, 7},
        {6, 3, 9, 6, 0},
        {4, 1, 2, 7, 5}
    };
    
    // Coordinates for the rectangle (l1, r1) to (l2, r2)
    // Example from the image: (0, 1) to (2, 4) - highlighted cells
    int l1 = 0;
    int r1 = 1;
    int l2 = 2;
    int r2 = 4;
    
    // Note: l1, r1, l2, r2 must be valid indices: 
    // 0 <= l1 <= l2 < n and 0 <= r1 <= r2 < m.
    
    long long total_sum = findRectangleSum(n, m, matrix, l1, r1, l2, r2);
    
    printf("The sum of the rectangle from (%d, %d) to (%d, %d) is: %lld\n", 
           l1, r1, l2, r2, total_sum); // Expected sum for the example: 45
    
    return 0;
}