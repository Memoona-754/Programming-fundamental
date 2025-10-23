#include<stdio.h>
int main(){
    int arr[7]={3,55,67,4,9,33,70};
    int mini = arr[0];
    for(int i=0;i<7;i++){
        if(mini>arr[i]){
            mini = arr[i];
        }
    }
    printf("%d",mini);
    return 0;
}