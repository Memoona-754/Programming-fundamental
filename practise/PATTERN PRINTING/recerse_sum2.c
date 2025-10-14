#include<stdio.h>
int main()
{   
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int n2 = n;  
    int r=0;

    while(n>0){
        r = r*10 + (n%10);
        n = n/10;
    }
    printf("The reversed number is %d\n", r);
    int sum;
    

        sum = n2+r;
    printf("The sum of the number and its reverse is %d", sum);

    return 0;  
}
