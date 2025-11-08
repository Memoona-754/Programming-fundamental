#include<stdio.h>
int main(){
    char choice1, choice2, choice3, choice4;
    int qty1=0, qty2=0, qty3=0, qty4=0;
    int total=0, price;

    int types;
    printf("B=Burger(Rs.200)\n");
    printf("F=French Fries(Rs.50)\n");
    printf("P=Pizza (Rs.500)\n");
    printf("S=Sandwiches(Rs.150)\n");

    printf("How many types of snacks you need to order(1-4)? ");
    scanf("%d",&types);

    if(types>=1){
         printf("Enter first snack you want to order: ");
         scanf(" %C",&choice1);
         printf("Please provide quantity:");
         scanf("%d",&qty1);

         switch(choice1){
              case 'B' : case 'b' :
              price = 200;
              printf("%d Barger(s) value %d PKR\n",qty1,qty1*price);
              break;
              case 'F' : case 'f' :
              price = 50;
              printf("%d French Fries value %d PKR\n",qty1,qty1*price);
              break;
              case 'P' : case 'p' :
              price = 500;
              printf("%d Pizza(s) value %d PKR\n",qty1,qty1*price);
              break;
              case 'S' : case 's' :
              price = 150;
              printf("%d Sandwich(s) value %d PKR\n",qty1,qty1*price);
              break;
              default:
              printf("Invalid choice!\n");
         }
    }
    return 0;
}