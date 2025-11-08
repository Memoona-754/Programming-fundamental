#include<stdio.h>
int main(){
    float watts;
    float kilowatts=watts/1000;
    printf("Enter power in watts : ");
    scanf("%f",&watts);

    kilowatts=watts/1000;
    printf("The power in kilowatts is : %f",kilowatts);

    return 0;
}