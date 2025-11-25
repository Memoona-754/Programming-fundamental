#include <stdio.h>

void SortFunction(int *arr, int *size, int order) {
    int i, j, temp;

    for(i = 0; i < *size - 1; i++) {
        for(j = i + 1; j < *size; j++) {

            // Ascending order
            if(order == 1 && arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

            // Descending order
            if(order == 2 && arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[50], size, order, i;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter sorting order (1 = Ascending, 2 = Descending): ");
    scanf("%d", &order);

    SortFunction(arr, &size, order);

    printf("\nSorted Array:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
