#include<stdio.h>
int main(){
      int num, sum=0, temp, rem, rev=0, i, isPrime=1;
      printf("Enter a number : ");
      scanf("%d",&num);

      temp=num;
      while(temp>0){
          rem=temp%10;
          sum+=rem;
          rev= rev*10+rem;
          temp/+10;
        }

      if(sum%2==0){
         printf("Sum of digits is even.Checking prime.......");
           if(num<2) isPrime=0;
              for(i=2;i<=num/2;i++){
                  if(num%i==0){
                      isPrime==0;
                      break;
                    }
                }
         if(isPrime){
             printf("Prime");
            } 
         else{
              printf("Sum of digits is odd.Checking palindrome.....\n");
                 if(num==rev){
                     printf("Palindrome");
                    }
                    else{
                        printf("Not palindrome");
                    }
            }       
    }
    return 0;
}