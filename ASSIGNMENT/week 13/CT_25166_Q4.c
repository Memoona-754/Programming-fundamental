#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;

    // Ask user for size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Fill the array with squares of indices
    for (int i = 0; i < n; i++) {
        arr[i] = i * i;
    }

    // Print the array
    printf("Array elements (squares of indices):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);

    return 0;
}
