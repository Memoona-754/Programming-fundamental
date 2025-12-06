#include <stdio.h>

// Function that prints array elements
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    // Passing array to function
    printArray(numbers, 5);

    return 0;
}
