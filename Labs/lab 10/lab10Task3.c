#include<stdio.h>
int main(){
    int a,*p;
    a=10;
    p=&a;
    printf("%d\n",*p);
    printf("%d\n",*&a);
    printf("%u\n",&a);
    printf("%u\n",p);
    printf("%u",&p);
    return 0;
}