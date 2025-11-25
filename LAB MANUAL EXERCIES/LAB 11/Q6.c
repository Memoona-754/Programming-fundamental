#include <stdio.h>

int main() {
    int a[10];
    int i;

    // Fill the array using array syntax
    for(i = 0; i < 10; i++) {
        a[i] = i * i;
    }

    // Print using pointer syntax
    printf("Array elements (using pointers):\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", *(a + i));   // pointer notation
    }

    return 0;
}
