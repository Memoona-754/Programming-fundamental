#include <stdio.h>

// Function to sort an array using pointers
void bubbleSort(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) { // Compare using pointers
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

// Function to print array using pointers
void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[5] = {5, 2, 9, 1, 3};
    int n = 5;

    bubbleSort(arr, n);  // Sort the array
    printf("Sorted Array: ");
    printArray(arr, n);  // Print the sorted array

    return 0;
}
