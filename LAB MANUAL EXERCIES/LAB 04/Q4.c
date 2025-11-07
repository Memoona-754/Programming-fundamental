#include<stdio.h>
int main(){
    float a,b,c;
       printf("Enter a,b,c: ");
       scanf("%f %f %f ",&a, &b, &c);

       float d = b*b - 4*a*c;
       float r1,r2;

       if(d>0){
          r1 = (-b+(d)/(2*a));
          r2 = (-b-(d)/(2*a));
         printf("Roots are real and different\n");
         printf("r1=%.2f\n",r1);
         printf("r2=%.2f\n",r2);
       }
       else if(d==0){
          r1=-b/(2*a);
           printf("Roots are real and equal\n");
           printf("r1=r2=%.2f\n",r1);
       }
       else{
           printf("Roots are imaginary\n");
       }
         return 0;
}