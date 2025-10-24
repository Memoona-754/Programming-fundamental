#include<stdio.h>
int main(){
    int age1;
    printf("Enter age of Ali : ");
    scanf("%d",&age1);
    int age2;
    printf("\nEnter age of Ahad : ");
    scanf("%d",&age2);
    int age3;
    printf("\nEnter age of Ahmad : ");
    scanf("%d",&age3);

    if(age1<age3 && age1<age2 ){
        printf("Ali is youngest");
    }else if(age2<age3 && age2<age1 ){
        printf("Ahad is youngest");
    }else if(age3<age2 && age3<age1 ){
        printf("Ahmad is youngest");
    }
        return 0;}