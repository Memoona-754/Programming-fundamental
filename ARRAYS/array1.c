/*given an array of matks of 10 students,if the marks of any student is less than 35 
print its roll nmbr(roll nmbr refer to index of array) */

#include<stdio.h>
int main(){
    int marks[10]={66,78,22,52,91,33,74,34,29,99};
    for(int i=0;i<10;i++){
        if(marks[i]<=35){
           // printf("%d ",marks[i]);
             printf("%d ",i);
        }
    }
}