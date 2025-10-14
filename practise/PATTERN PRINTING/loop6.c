/*two numbers are entered through the keyboard,write a program to find the value of one number raised to 
the power of another number*/

#include<stdio.h>
int main()
{
       int a,b;
       printf("Enter your base : ");
       scanf("%d",&a);
       printf("Enter your power : ");
       scanf("%d",&b);

         int power=1;
         for(int i=1;i<=b;i++){
             power=power*a;
         }
         printf("%d raised to the power %d is %d",a,b,power);

         return 0;

}