/*A customer asks the IT firm to develop a program in C language, which can take tax rate and 
salary from the user on runtime and then calculate the tax, the user has to pay and the salary 
he/she will have after paying the tax. This information is then provided to the user. */

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