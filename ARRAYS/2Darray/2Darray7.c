//write a program to change the given nxn matrix to its transpose

#include <stdio.h>
int main() {
    int n;
    printf("Enter number of rows/columbs: ");
    scanf("%d", &n);
    //printf("Enter number of columns: ");
    //scanf("%d", &c);

    int arr[n][n];
    int i, j;

    // Input matrix elements
    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            //swapping arr[i][j] and arr[j][i]
            int temp = arr[i][j];
            arr[i][j]= arr[j][i];
            arr[j][i] = temp;
        }
         printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
    printf("\n");
}
}