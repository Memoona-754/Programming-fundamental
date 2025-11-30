#include <stdio.h>

void rotate_array(int arr[], int size, int k) {
    k = k % size;
    int temp[100];

    // store last k elements
    for (int i = 0; i < k; i++)
        temp[i] = arr[size - k + i];

    // shift remaining right
    for (int i = size - 1; i >= k; i--)
        arr[i] = arr[i - k];

    // put saved elements in front
    for (int i = 0; i < k; i++)
        arr[i] = temp[i];
}

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k (positions to rotate): ");
    scanf("%d", &k);

    rotate_array(arr, n, k);

    printf("Array after rotation:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
