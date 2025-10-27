#include <stdio.h>

int main() {
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int arr[r][c];
    int i, j;

    // Input matrix elements
    printf("Enter elements of matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int maxSum = -999999;  // initialize with a small number
    int rowNum = 0;

    // Calculate sum of each row
    for(i = 0; i < r; i++) {
        int rowSum = 0;
        for(j = 0; j < c; j++) {
            rowSum += arr[i][j];
        }
        if(rowSum > maxSum) {
            maxSum = rowSum;
            rowNum = i;
        }
    }

    printf("\nRow %d has the maximum sum = %d\n", rowNum + 1, maxSum);

    return 0;
}