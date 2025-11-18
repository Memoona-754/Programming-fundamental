#include <stdio.h>
int main() 
{
    int a[10];// Declare an empty array of 10 integers
    int i;
   printf("\n\t\t\t\t\tStoring Square of Index in Each Element!\n\n");
   for (i = 0; i < 10; i++) 
	 {
        a[i] = i * i; //same as *(a + i) = i * i;
	   //each element stores the square of its index
    }
   
    printf("Array elements:\n");//print array
    for (i = 0; i < 10; i++) 
	{
        printf("%d ", *(a + i)); // Access elements using pointer
  }
    
    printf("\n");
    return 0;
}