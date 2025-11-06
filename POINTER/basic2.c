#include<stdio.h>
int main(){
    int a=5;
    int* x=&a;//decleration of pointer
    printf("%p\n",x);//%p stores address,will print address of a
     printf("%p",&x);//print address of x(pointer)
    return 0;
}