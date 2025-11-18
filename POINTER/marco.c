#include <stdio.h>
#define N 3
int main(){
    int a[N],i;
    for (i=0;i<N;i++){
        printf("Enter the input for index %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nArray element are as follows: \n");
    for(i=0;i<N;i++){
        printf("%d ",a[i]);
    }
      return 0;
}