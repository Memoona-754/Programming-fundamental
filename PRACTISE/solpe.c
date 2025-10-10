/*given three points (x1,y1),(x2,y2),(x3,y3), write aprogram to check all three fall 
on one straight line or not : */

#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    int m1,m2;
    printf("Enter value of x1 : ");
    scanf("%d",&x1);
    printf("Enter value of y1 : ");
    scanf("%d",&y1);
    printf("Enter value of x2 : ");
    scanf("%d",&x2);
    printf("Enter value of y2 : ");
    scanf("%d",&y2);
    printf("Enter value of x3 : ");
    scanf("%d",&x3);
    printf("Enter value of y3 : ");
    scanf("%d",&y3);
   
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);

    if(m1=m2){
        printf("All three point lie on one straight line");
    }else{
        printf("Does not lie on one straight line");
    }
    return 0;
}