#include <stdio.h>

int main() {
    float arr[20];
    float *ptr = arr;
    float max1, max2;
    int i;

    printf("Enter 20 floating-point numbers:\n");
    for(i = 0; i < 20; i++) {
        scanf("%f", ptr + i);
    }

    // Initialize max1 and max2
    if (*(ptr) > *(ptr + 1)) {
        max1 = *(ptr);
        max2 = *(ptr + 1);
    } else {
        max1 = *(ptr + 1);
        max2 = *(ptr);
    }

    // Find highest and second highest
    for(i = 2; i < 20; i++) {
        float val = *(ptr + i);

        if (val > max1) {
            max2 = max1;
            max1 = val;
        }
        else if (val > max2 && val < max1) {
            max2 = val;
        }
    }

    printf("\nSecond highest number is: %.2f\n", max2);

    return 0;
}
