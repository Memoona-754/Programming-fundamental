#include <stdio.h>
void takeinput(int *a, int *b);
void sum();

int main()
{
sum();
return 0;
}

void takeinput(int *a, int *b)
{
printf("Enter first number: ");
scanf("%d", a);
printf("Enter second number: ");
scanf("%d", b);
}

void sum()
{
int a, b;
takeinput(&a, &b);
int result = a + b;
printf("The sum of %d and %d is %d\n", a, b, result);
}     