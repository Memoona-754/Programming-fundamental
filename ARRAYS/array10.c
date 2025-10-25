#include <stdio.h>
int main() {
    int arr[7] = {10, 8, 19, 6, 44, 45, 93};
    int max = arr[0];
    int smax = -1;  // start from a small value

    for (int i = 1; i < 7; i++) {
        if (arr[i] > max) {
            smax = max;   // old max becomes second max
            max = arr[i]; // new max found
        } else if (arr[i] > smax && arr[i] != max) {
            smax = arr[i]; // update second max
        }
    }

    printf("Max = %d, Second Max = %d", max, smax);
    return 0;
}
#include<stdio.h>
int main(){
    int arr[7]={10,8,19,6,44,45,93};
    int max = arr[0];
    int smax = arr[0];
     
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
           max=arr[i];
        }
        if(smax<arr[i] && max!=arr[i]){
           smax=arr[i];
        }
    }
    printf("%d %d",max,smax);
    return 0;
}