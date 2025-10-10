#include<stdio.h>
int main(){
    int x;
    printf("Enter value of x : ");
    scanf("%d",&x);

    x%2==0 ? printf("Even number"): printf("Odd number");
    return 0;
}