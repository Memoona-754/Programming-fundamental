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
    for(i=1;i<=n;i++){
        if(i%2!=0){
        sum = sum+i;}
        else {
        sum = sum -i;}
        }
    printf("The sum of given series is : %d",sum);
}

