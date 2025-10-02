#include<stdio.h>
int main ()
{
  int a, b, c;
  
  printf("Enter 1st side of triangle : ");
  scanf("%d",&a);

  printf("Enter 2nd side of triangle : ");
  scanf("%d",&b);

  printf("Enter 3rd side of triangle : ");
  scanf("%d",&c);

  if(a+b>c && a+c>b && b+c>a){
    if(a==b && b==c){
        printf("It is a equilateral triangle");
    }else if(a==b || b==c || a==c){
        printf("It is a isosceles triangle");
    }else{
    printf("It is a scalene triangle");
  }
}else{
    printf("The given sides do not form a valid triangle");
}
    return 0;
}