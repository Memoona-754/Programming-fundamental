/*Teacher asks the student to check whether the input number is divisible by 7 or not. For checking 
the divisibility, take the last digit and double it, take the rest of the digits and subtract the 
doubled last digit repeat until the result is 7, -7 or 0. For example: 
10976 -> 1097-12 = 1085 -> 108-10 = 98 -> 9-16 = -7 
49 -> 4 - 18 = 14 -> 1 - 8 = -7  */

#include <stdio.h>
int main () {
	int num ,originalnum ,extractdigit ,rest ; 
	
	printf("Input Number = "); 
	scanf("%d" ,&num); 
	
	originalnum = num ; 
	
	while(num != 7 && num != -7 && num != 0){
		extractdigit = num % 10; 
		rest = num/10; 
		rest = rest - extractdigit*2; 
		num = rest; 
	}
	
	if(num == 7 || num == -7){
		printf("%d is divisible by 7." ,originalnum); 
	}
	else {
		printf("%d is not divisible by 7." ,originalnum);
	}
	
	
	return 0; 
}