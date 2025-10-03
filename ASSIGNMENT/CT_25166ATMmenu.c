#include<stdio.h>
int main(){
    int choice, balance=1000, amount;
    
    printf("1.withdraw\n 2.deposit\n 3.check balance\n 4.exit\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
              printf("Enter a amount to withdraw : ");
              scanf("%d",&amount);
              balance-=amount;
              printf("Remaining balance = %d",balance);
              break;

        case 2:
              printf("Enter a amount to deposit : ");
              scanf("%d",&amount);
              balance+=amount;
              printf("Remaining balance = %d",balance);
              break;
         
        case 3:
              printf("Balance = %d",balance);
              break;
              
        case 4:
              printf("Existing...");
              break;
              
         default:
         printf("Invalid choice");     
    }
}