#include<stdio.h>
int main(){

    int a[5]={5,6,87,56,43};
    int max=0,min=0;

    for(int i=1;i<=5;i++){
        if(a[i]>max){
            max=a[i];
        }else if(a[i]<min){ 
            min=a[i];
        }
    }
        printf("The maximum is: %d \n",max);
        printf("The minimum is: %d",min);
    
}