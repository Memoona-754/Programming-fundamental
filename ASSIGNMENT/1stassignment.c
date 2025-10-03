/*take 3 numbers input and tell if they can be sides of triangle

for triangle : 
a+b>c
a+c>b
b+c>a*/

#include<stdio.h>
int main(){
    int a;
    printf("Enter your first side : ");
    scanf("%d",a);

    int b;
    printf("Enter your second side : ");
    scanf("%d",b);

    int c;
    printf("Enter your third side : ");
    scanf("%d",c);

    if((a+b)>c && (a+c)>b && (b+c)>a){
        printf("Valid trianglr");
    }else{
        printf("Invalid triangle");
    }
     return 0;
}