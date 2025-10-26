//write a program to store 10 at every index of 2D array with 5 rows and 5 columbs

#include<stdio.h>
int main(){
    int arr[5][5];
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            printf("10 ");
        }
        printf("\n");
    }
}