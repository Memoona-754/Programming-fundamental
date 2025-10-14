#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    //1-2+3-4+5-.......n
    // odd numbers ->add
    // even numbers ->substract
    int sum =0;
    int i;
        if(i%2!=0){
          sum=-n/2;}
        else{
         sum = (-n/2)+n;}
    
    printf("The sum of given series is : %d",sum);
    return 0;
}