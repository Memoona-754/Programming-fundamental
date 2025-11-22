#include <stdio.h>
int main() 
{
    float numarr[20];
    float *ptr = numarr;//pointer ptr points to first element of array
    int i;
    //printf("\n\t\t\t\t\tSecond Highest Number in Array!\n\n");
    //printf("Enter 20 float(decimal) numbers:\n");
    for (i = 0; i < 20; i++) 
	{
        scanf("%f", ptr + i);//inputs 20 float numbers in array
  }
    //initializes highest and sechighest with first element in array
    float highest = *ptr;
	float secondhighest = *ptr;
    for (i = 0; i < 20; i++) 
	{
        if (*(ptr + i) > highest) //if current element is greater than highest 
		  {
            secondhighest = highest; //store it in highest
            highest = *(ptr + i);//and store previous value of highest in secondhighest
      } 
		   else if (*(ptr + i) > secondhighest && *(ptr + i) < highest) //if current value is greater than secondhighest but smaller than highest
		 {
            secondhighest = *(ptr + i);//then saves it in secondhighest
     }
  }

    printf("Second highest number = %0.3f\n", secondhighest);
    return 0;
} 