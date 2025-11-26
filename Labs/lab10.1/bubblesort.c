#include<stdio.h>
int main(){
    int arr[5]={5,4,7,9,3};
    int i,j,temp;

    for(i=0;i<5-1;i++){
        for(j=0;j<5-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("sorted array:");
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}