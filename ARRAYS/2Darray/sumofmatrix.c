#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    printf("Enter the number of columbs : ");
    scanf("%d",&c);
    int arr[r][c];
      int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter elements [%d] [%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
      }
        printf("\n");
    }
       int sum = 0;
       for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
       sum += arr[i][j];}}
  printf("The sum of given matrix is : %d",sum);
    return 0;
}
  