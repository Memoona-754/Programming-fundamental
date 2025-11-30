#include <stdio.h>

int find_mode(int arr[], int size) {
    int maxCount = 0, mode = arr[0];

    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount || (count == maxCount && arr[i] < mode)) {
            maxCount = count;
            mode = arr[i];
        }
    }
    return mode;
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Mode = %d\n", find_mode(arr, n));

    return 0;
}
