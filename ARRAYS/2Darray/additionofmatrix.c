#include<stdio.h>
int main(){
    int a[2][2] = {{5,6},{9,8}};
    int b[2][2] = {{3,5},{7,5}};
    int res[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res[i][j]=a[i][j]+b[i][j];
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}