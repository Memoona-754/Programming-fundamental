#include <stdio.h>
int main() {
    int arr[4] = {1,2,3,4};
    int max = arr[0];
    int smax = -1; 

    for (int i = 1; i < 4; i++) {
        if (arr[i] > max) {
            smax = max;   
            max = arr[i]; 
        } else if (arr[i] > smax && arr[i] != max) {
            smax = arr[i];
        }
    }

    printf("Max = %d, Second Max = %d", max, smax);
    return 0;
}
