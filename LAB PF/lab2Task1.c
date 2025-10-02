#include<stdio.h>
int main (){
    int var1, var2;

    printf("Enter value of var1 : ");
    scanf("%f",&var1);

    printf("Enter value of var2 : ");
    scanf("%f",&var2);

    if(var1!=var2){
        printf("var1 is not equal to var2\n");
        if(var1>var2){
            printf("var1 is greater than var2");
        }else{
            printf("var2 is greater than var1");
        }
    }else
      printf("var1 is equal to var2");

      return 0;

}