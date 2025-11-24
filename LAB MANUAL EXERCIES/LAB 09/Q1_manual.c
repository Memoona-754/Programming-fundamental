#include <stdio.h>
#include <stdlib.h>

void CountFrequency(int arr[], int size) {
    int freq[11] = {0};  // Since values are between 0–10

    // Count frequency
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    // Print unique values and their occurrences
    printf("\nVALUE\tOCCURRENCE\n");
    printf("-----------------------\n");
    for (int i = 0; i <= 10; i++) {
        if (freq[i] > 0) {
            printf("%d\t%d\n", i, freq[i]);
        }
    }
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int array1[n];

    // Seed for random numbers
    srand(1);  // You may change seed or use time(0)

    // Generate random array (0–10)
    printf("\nGenerated Array:\n");
    for (int i = 0; i < n; i++) {
        array1[i] = rand() % 11;
        printf("%d ", array1[i]);
    }

    // Call function
    CountFrequency(array1, n);

    return 0;
}
