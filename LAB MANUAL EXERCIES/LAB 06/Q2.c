#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int a = 1, b = 1, sum = 1;
    if (n == 1 || n == 2)
        sum = 1;
    else {
        for (int i = 1; i <= n - 2; i++) {
            sum = a + b;
            a = b;
            b = sum;
        }
    }
    printf("The %dth Fibonacci is : %d", n, sum);
    return 0;
}
