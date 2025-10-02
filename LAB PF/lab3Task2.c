#include<stdio.h>
int main(){
    int hours;
    float d1,d2,d3,d4,d5,totalDistance,averageSpeed;

    printf("Enter the number of hours car travelled : ");
    scanf("%d",&hours);

    printf("Enter distance in  hours 1 : ");
    scanf("%f",&d1);

    printf("Enter distance in  hours 2 : ");
    scanf("%f",&d2);

    printf("Enter distance in  hours 3 : ");
    scanf("%f",&d3);

    printf("Enter distance in  hours 4 : ");
    scanf("%f",&d4);

    printf("Enter distance in  hours 5 : ");
    scanf("%f",&d5);

    totalDistance=d1+d2+d3+d4+d5;
    averageSpeed=totalDistance/hours;

    printf("\nTotal Distance=%f\n",totalDistance);
    printf("\nAverage Speed=%f\n",averageSpeed);

    return 0;
}