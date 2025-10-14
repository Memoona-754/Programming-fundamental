#include<stdio.h>
int main(){
   int n;
   printf("enter no. of rows : ");
   scanf("%d",&n);
    
   int a = n;
   for(int i=1;i<=n;i++){   //responsible for no. of rows
      for(int j=1;j<=a;j++){   //responsible for star pattern
        printf("*");
      }
      a--;
      printf("\n"); 
   }
   
}