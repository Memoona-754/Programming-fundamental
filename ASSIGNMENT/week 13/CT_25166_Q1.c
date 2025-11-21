#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    float *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (float *)calloc(n, sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    // Input array elements
    printf("Enter %d float values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
    // Print the array
    printf("The array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
