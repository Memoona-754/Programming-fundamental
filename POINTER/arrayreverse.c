#include<stdio.h>
int main(){
    int a[9]={34,66,4,56,99,8,12,4,52};

     //original order
     for(int i=0;i<9;i++){
        printf("%d ",a[i]);
     }
    printf("\n");

     //reverse order
     for(int i=8;i>=0;i--){
        printf("%d ",a[i]);
     }
       return 0;
}