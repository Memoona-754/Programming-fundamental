#include<stdio.h>
int main(){
     int i,j;
for (i = 0; i < 5; i++) {
    for (j = 0; j < 3; j++) {
        if (i == 2 && j == 1) {
            break;
        }
    }
}
printf("i = %d, j = %d\n", i, j);
  return 0;
}
