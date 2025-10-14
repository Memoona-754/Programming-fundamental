#include<stdio.h>
int main(){
   int n;
   printf("enter no. of rows : ");
   scanf("%d",&n);
   
   for(int i=1;i<=n;i++){   //responsible for no. of rows
      int a=1;
      for(int j=1;j<=i;j++){   
        printf("%d",a);
        a=a+2;
        }
      printf("\n"); 
   }
}
