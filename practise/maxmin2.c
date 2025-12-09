#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    p = arr;   // pointer points to first element

    // ------------------------
    // Input array using pointer
    // ------------------------
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", (p + i));   // input using pointer
    }

    // ------------------------
    // Find largest & smallest
    // ------------------------
    int largest = *p;
    int smallest = *p;

    for(i = 0; i < n; i++) {
        if(*(p + i) > largest)
            largest = *(p + i);

        if(*(p + i) < smallest)
            smallest = *(p + i);
    }

    // ------------------------
    // Output results
    // ------------------------
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}
