#include<stdio.h>
int main(){
    int a [5] = {2,4,6,8,1};
    a[4]=100;  //now {2,4,6,8,100}
    printf("%d",a[4]);
    float b[4] = {2.4,5.6,8.88,7.45};
    printf("\n%f",b[3]);
    char c[6] = {'d','%','h','k','m','*'};
    printf("\n%c",c[2]);
}