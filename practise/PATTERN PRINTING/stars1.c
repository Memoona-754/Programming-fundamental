#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
       for(int i=1;i<=n;i++){
        printf("*");
       }
          printf("\n");
        }
    }

    //outer loop ->rows(no. of lines)
    //inner loop ->columb(no. of stars)