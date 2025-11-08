#include<stdio.h>
int main(){
    float Salary;
    float taxrate;
    float TaxAmount;
    float netsalary;

    printf("Enter your salary : ");
    scanf("%f",&Salary);

    printf("Enter taxrate : ");
    scanf("%f",&taxrate);

    TaxAmount=(Salary*taxrate)/100;

    printf("\ntax to be paid : %f\n",TaxAmount);

    return 0;
}