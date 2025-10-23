/*find the maximum value out of all the elements in a array*/

#include<stdio.h>
int main(){
    int arr[7]={3,55,67,4,9,33,70};
    int max = arr[0];
    for(int i=0;i<7;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}