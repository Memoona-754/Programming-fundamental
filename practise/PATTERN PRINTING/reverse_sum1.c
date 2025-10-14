#include <stdio.h>
int main()
{
    int n;
    int sum=0;
    int lastDigit=0;
    printf("Enter a number : ");
    scanf("%d", &n);

    int n2 = n;
    int r=0;

    while(n>0){
        r = r*10 + (n%10);
        n = n/10;
    }

    printf("The reversed number is %d\n", r);

    while(n2!=0){
        lastDigit = n2%10;
        sum = sum + lastDigit;
        n2 = n2/10;
    }
    
    printf("The sum of the number is %d", sum);

    return 0;
}