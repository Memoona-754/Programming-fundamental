//count the number of elements in given array greater thsn given number x

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int x = 4;
    int count = 0;
    int size = sizeof(arr) / sizeof(arr[0]); // total elements in array

    for (int i = 0; i < size; i++) {
        if (arr[i] > x) {
            count++;
        }
    }

    printf("Number of elements greater than %d = %d\n", x, count);

    return 0;
}