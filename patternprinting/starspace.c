#include<stdio.h>
int main(){
    int n;
    printf("Enter no.of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==3 || i==3){   //for n=5
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}