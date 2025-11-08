/*#include<stdio.h>
int main(){
    int i,j,k,rows=5;
      for(i=1;i<=rows;i++){
          for(j=1;j<=rows;j++){
            printf(" ");
          }
          for(k=1;k<=2*i-1;k++){
            printf("*");
          }
          printf("\n");
      }
      for(i=rows-1;i<=1;i--){
          for(j=1;j<=rows;j++){
            printf(" ");
          }
          for(k=1;k<=2*i-1;k++){
            printf("*");
          }
          printf("\n");
      }
      return 0;  
}*/

#include <stdio.h>

int main() {
    int n = 5; // Number of rows for the top half, including the middle row
    int i, j, space;

    // Upper half of the diamond
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower half of the diamond
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}