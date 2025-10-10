#include<stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int a=100;
    for(int i= 1;i<=n;i++){
     printf("%d  ",a);
       a=a-3;
    }
}

/*#include<stdio.h>
int main(){
  int a = 100;
  for( int i=1;a>0;i++)
  printf("%d",a);
  a=a-3;

}*/