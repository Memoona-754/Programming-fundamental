/*Given the length and breadth of a rectangle, 
write a program to find whether the area of a rectangle is
 greater than its perimeter*/


#include<stdio.h>
 int main(){
    int l;
    int b;
    printf("Enter length : ");
    scanf("%d",l);
    printf("Enter bredth : ");
    scanf("%d",b);
    int a = l*b;
    int p = 2*(l*b);

    if(a>p){
        printf("Area is greater");
    }else if(a<p){
        printf("Perimeter is greater");
    }else{
        printf("Area is equal to perimeter");
    }
     return 0;
}