#include<stdio.h>
int main(){
    int j = 10;
    int k = 1;
    for(int i=0;i<10;i++){
        
        printf("10x%d=%d\n",j,10*j);
        printf("9x%d=%d\n",k,9*k);

        j--;
        k++;
    }
    return 0;
}