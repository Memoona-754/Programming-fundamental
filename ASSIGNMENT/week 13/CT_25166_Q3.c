#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr;
    int i;

    arr = (int *)malloc(3 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < 3; i++) {
        arr[i] = (i + 1) * 10;  
    }
    arr = (int *)realloc(arr, 5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    arr[3] = 40;
    arr[4] = 50;

    printf("Array elements are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
