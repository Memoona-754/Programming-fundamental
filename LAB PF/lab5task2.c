#include<stdio.h>
int main(){
    float sum = 1.0;
    int i = 4;

    while(i<=400){
        sum+=1.0/i;
        i+=4;
    }
    printf("1/%d",i);
    if(i<400){
        printf("+");
    }
      i+=4;
      printf("Sum of series = %4f\n",sum);
    return 0;
}