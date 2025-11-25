#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;   // pointer to first element

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i);  // store values using pointer
    }

    // Calculate sum using pointer
    for(i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("\nSum of all elements: %d\n", sum);

    return 0;
}
