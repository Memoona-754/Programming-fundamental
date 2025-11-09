#include<stdio.h>
int main(){
    int a=25;
    int*x=&a;
    *x=7;
    printf("%p\n",a);
        return 0;
}