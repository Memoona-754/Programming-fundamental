#include<stdio.h>
int main()
{
   int a,b;
   printf("Select your department\n");
   printf("1. School of Computer Science\n");
   printf("2. School of Engineering\n");
   printf("Make your selection\n");
   scanf("%d",&a);
   switch(a){
    case 1:
    printf("You selected Computer Science.\n");
    printf("Choose your specialization:\n");
    printf("1.CSIT\n");
    printf("2.CSDS\n");
    printf("3.CSCR\n");
    printf("Enter your choice:\n");
    scanf("%d",&b);
    switch(b){
       case 1:
       printf("Your subdepartment is CSIT");
       break;
       case 2:
       printf("Your subdepartment is Data Science");
       break;
       case 3:
       printf("Your subdepartment is Cyber Security");
       break;
    }
    break;
    case 2:
    printf("Your department is Engineering");
    break;
    default:
    printf("Invalid input");
   }
}