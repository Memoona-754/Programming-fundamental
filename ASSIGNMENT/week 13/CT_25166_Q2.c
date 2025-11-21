#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 10;

    // Allocate memory for 10 integers, initialized to 0
    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Print the array elements (all should be 0)
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
