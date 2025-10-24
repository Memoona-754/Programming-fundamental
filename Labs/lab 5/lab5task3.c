#include<stdio.h>
int main(){
    int age;
    int hasID;//1=yes 0=no

    printf("Enter your age : ");
    scanf("%d",&age );
    
    if(age>=18){
        printf("Do you have ID : ");
        scanf("%d",&hasID);

        if(age>=18 && hasID==1){
            printf("You are eligible for voting");
        }else if(age>=18 && hasID==0){
            printf("You meet the age requirment but cannot vote without ID");
        }
    }else
         printf("You are not eligible for voting");

         return 0;
}