/*A car traveled for some hours. The time car traveled is taken at run time of the program, and it 
must not be negative and must be between one to five hours. The car had not traveled same 
distance in each hour. The distance that the car covered must not be negative. Write a C Program 
that computes the Average Speed of the Car in miles per hour. Hint: the restrictions can be 
displayed in the form of message on the window.*/

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