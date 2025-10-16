#include<stdio.h>
int main(){
    int n;
    printf("Enter the range : ");
    scanf("%d",&n);

    printf("Pairs whose sum is even : \n");

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%2==0){
                printf("(%d,%d)",i,j);
            }
        }
    }
    return 0;
}