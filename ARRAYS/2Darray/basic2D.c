#include<stdio.h>
int main(){
    int arr[3][3]={{3,4,5},{8,4,6},{9,5,8}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}