#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;
    for(int i=1;i<=n-2;i++){
        sum = a+b;
        a=b;
        b=sum;
    }
    printf("The %dth fibonacci is : ",n,sum);
}

//fibonacci series: 1 1 2 3 5 8 13 21
/*1st term=1, 2nd term=1, 3rd term=2, ......
(above we are using n-2 bcz we had already initialized our fist two terms
as a,b  so, to balance oeder of terms we are using n-2)*/