#include<stdio.h>
int main(){
    int denominator=4;
    float sum=1.0;
    printf("S=1+");
    while(denominator<=400){
        sum+=1.0/denominator;
        printf("1/%d",denominator);
        
        if(denominator<400){
            printf(" + ");
        }
        denominator+=4;
    }
    printf("\nSum=%.4f\n ",sum);

    return 0;
}