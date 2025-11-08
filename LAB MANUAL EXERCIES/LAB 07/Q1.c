#include <stdio.h>
int main() {
    int n, i;
    float sum = 0, count = 0;

    printf("Enter how many numbers you want to input: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] > 0) {
            sum += arr[i];
            count++;
        }
    }

    printf("\nSum of all positive numbers: %.2f\n", sum);

    if(count > 0) {
        float avg = sum / count;
        printf("Average of positive numbers: %.2f\n", avg);
    } else {
        printf("No positive numbers entered, average not possible.\n");
    }

    return 0;
}
