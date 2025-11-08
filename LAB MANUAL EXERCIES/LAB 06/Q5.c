#include<stdio.h>
int main(){
    int n=40;
    double pi=0.0;
    int sign=1,i;

    for(i=1;i<=n;i++){
        pi=pi+sign*(4.0/(2*i-1));
        sign=-sign;

        printf("%d\t%.6f\n",i,pi);
    }
     return 0;
}