#include <stdio.h>
int main() 
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int numarr[n];//decalre empty array
    int *ptr = numarr;//declare and initialise pointer to array
    int i,sum = 0;
    
    for(i = 0; i < n; i++) 
	{
        printf("Enter element %d: ", i+1);
        scanf("%d", &numarr[i]);  //or use &*(ptr + i)
    }

    for(i = 0; i < n; i++) 
	{
        sum = sum + *(ptr + i);
    }
    printf("Sum of array elements: %d\n", sum);
    return 0;
}