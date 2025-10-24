#include<stdio.h>
int main(){
    int denominator=4;
    float sum=1.0;
    printf("S=1+");
    while(denominator<=400){
        sum+=1.0/denominator;
        denominator+=4;
       // printf("1/%d",denominator);
        
    }
    printf("Sum of series = %.6f\n",sum);

    return 0;
}