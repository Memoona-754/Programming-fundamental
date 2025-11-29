#include<stdio.h>
int main(){
    int n;
    printf("Enter nmbr of rows & colmns: ");
    scanf("%d",&n);
    int A[n][n];
    printf("Enter elements of array: ");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Array: \n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    int T[n][n];
      for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            T[j][i]=A[i][j];
        }
    }
    printf("Array after: \n");
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",T[i][j]);
        }
        printf("\n");
    }
    return 0;
}