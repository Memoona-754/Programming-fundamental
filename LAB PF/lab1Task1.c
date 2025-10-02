#include<stdio.h>
int main(){
    float weight;
    float dosage = weight*0.8;

    printf("Enter patient's weight : ");
    scanf("%f",&weight);

    dosage=weight*0.8;

    printf("The dosage(mg) for patient is : %f",dosage);
    return 0;
}