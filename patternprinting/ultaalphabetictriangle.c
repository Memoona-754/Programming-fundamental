#include<stdio.h>
int main(){
   int n;
   printf("enter no. of rows : ");
   scanf("%d",&n);
    for(int i=n;i>=1;i--){
        int a=1;
        for(int j=1;j<=i;j++){
           int d=a+64; //d=65
        char ch=(char)d;  //ch=(char)65 ->ch='A'
        printf("%c",ch);
        a++;
        }
        printf("\n");
    }

}
