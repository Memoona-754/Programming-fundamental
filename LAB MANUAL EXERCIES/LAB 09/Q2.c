#include <stdio.h>
void swaped(int *aPtr, int *bPtr, int *cPtr) 
{
    int temp = *bPtr;  // b>temp
    *bPtr = *aPtr;     // a>b
    *aPtr = *cPtr;     // c>a
    *cPtr = temp;      // temp>c
}
int main() 
{
	printf("\n\t\t\t\t\tSwapping Values Using Pointers!\n");
    int a = 10, b = 20, c = 30;
    printf("Values before swap: a=%d b=%d c=%d\n\n", a, b, c);   
    swaped(&a, &b, &c);    
    printf("Values after swap: a=%d b=%d c=%d\n", a, b, c);
    return 0;
}