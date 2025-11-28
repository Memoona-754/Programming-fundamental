#include <stdio.h>

void bubbleSort(int *arr, int size);

int main() {
    int arr[5] = {5, 4, 7, 9, 3};

    bubbleSort(arr, 5);   // Function call with pointer

    printf("Sorted array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));   // printing using pointer
    }

    return 0;
}

void bubbleSort(int *arr, int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {

                // swapping using pointers
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
