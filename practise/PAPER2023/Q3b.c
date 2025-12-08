#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, index;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    // fill random 0 to 9
    for(i = 0; i < n; i++){
        a[i] = rand() % 10;
    }

    // print original
    printf("Original array: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    printf("\nEnter index to delete: ");
    scanf("%d", &index);

    // shift left
    for(i = index; i < n - 1; i++){
        a[i] = a[i + 1];
    }
    n--; // size reduces

    // print updated
    printf("After deletion: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
