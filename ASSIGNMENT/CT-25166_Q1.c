#include<stdio.h>

int main (void)
{
   int celcius;
   int fahrenhite;

   printf("Enter temp in celcius:");
   scanf("%d",&celcius);

   fahrenhite=celcius*9/5+32;

   printf("The temperature in fahrenhite is %d",fahrenhite);
   return 0;
}
 //100 degree celsius=212 degree fahrenhite
 //0 degree celsius=32 degree fahrenhite
 //-40 degree celsius=-40 degree fahrenhite