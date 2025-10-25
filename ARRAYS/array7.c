//find the difference between the sum of elements at even index to that of at odd index

#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int sumEven = 0; //sum of even index 1+3+5+7=16
    int sumOdd = 0; //sum of odd index 2+4+6=12

    for(int i=0;i<=6;i++){
        if(i%2==0){
            sumEven += arr[i];
        }else{
            sumOdd += arr[i];
        }
    }
    int result = sumEven-sumOdd;
    printf("%d",result);
}