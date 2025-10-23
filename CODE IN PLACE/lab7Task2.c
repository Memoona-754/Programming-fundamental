/* 1D Array Example */ 
#include<stdio.h> 
int main( ){ 
int avg, sum = 0; 
int i; 
int marks[5]; // array declaration 
for(i = 0; i<=4; i++){ 
printf("Enter student marks: "); 
scanf("%d", &marks[i]); /* stores the data in array*/ 
} 
for(i = 0; i<=4; i++) 
sum = sum + marks[i]; /* reading data from array */ 
avg = sum/5; 
printf("Average marks are:%d\n", avg); 
printf("total marks are :%d\n", sum); 
return 0;
}