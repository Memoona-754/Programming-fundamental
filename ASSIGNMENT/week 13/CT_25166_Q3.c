#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i;

    // Step 1: Allocate memory for 3 integers using malloc
    arr = (int *)malloc(3 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign values to the first 3 integers
    for (i = 0; i < 3; i++) {
        arr[i] = (i + 1) * 10;  // Example values: 10, 20, 30
    }

    // Step 2: Expand the array to 5 integers using realloc
    arr = (int *)realloc(arr, 5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Assign values to the new elements
    arr[3] = 40;
    arr[4] = 50;

    // Step 3: Print all 5 elements
    printf("Array elements are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 4: Free the memory
    free(arr);

    return 0;
}
