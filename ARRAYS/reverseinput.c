#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        int a=i+1;
        printf("Enter element number %d\n",i);
        scanf("%d",&arr[i]);
        }
        for(int i=4;i>=0;i--){
            printf("%d",arr[i]);
        }
    
    }