#include <stdio.h>
int main() {
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i, sum = 0;

    for (i = 0; i < 3; i++) {
        sum += arr[i][i];
    }
    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}
