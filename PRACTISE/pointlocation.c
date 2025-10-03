/*given point(x,y), write a program to find out if it lies on x-axis
or y-axis or at origin
for x-axis -> (z,0)
for y-axis -> (0,z)
for origin -> (0,0)*/

#include<stdio.h>
int main(){
    int x,y;
    printf("Enter value of  x : ");
    scanf("%d",&x);
    printf("Enter value of y : ");
    scanf("%d",&y);

     if(x==0 && y==0){

        printf("Lies on origin");
     }else if(y==0){
        printf("Lies on x-axis");
     }else if(x==0)
     printf("Lies on y-axis");
     else
     printf("Lies somewhere else");
    
     return 0;
}