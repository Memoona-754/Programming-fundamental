#include<stdio.h>
int main(){
    int i, a=2, b=3;
    int arr[2+3];
    for(i=0;i<a+b;i++){
        scanf("%d",&arr[i]);
        printf("\n%d",arr[i]);
    }
}