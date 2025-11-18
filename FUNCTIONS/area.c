#include<stdio.h>
int areaofrect(int length, int breadth){
    int area;
    area =  length*breadth;
    return area;
}
int main(){
    int a=10, b=5;
    int area = areaofrect(a,b);
    printf("%d\n",area);
}