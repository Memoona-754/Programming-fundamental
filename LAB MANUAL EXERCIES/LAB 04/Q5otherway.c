/*Teacher asks the student to check whether the input number is divisible by 7 or not. For checking 
the divisibility, take the last digit and double it, take the rest of the digits and subtract the 
doubled last digit repeat until the result is 7, -7 or 0. For example: 
10976 -> 1097-12 = 1085 -> 108-10 = 98 -> 9-16 = -7 
49 -> 4 - 18 = 14 -> 1 - 8 = -7  */

#include <stdio.h>
int main () {
	int num , size=0 ,originalnum; 
	
	printf("Input Number = "); 
	scanf("%d" ,&num); 
	
	originalnum=num; 
	
	//finding length of number.
	for(int i=1 ; num != 0 ; i++){
		int extractdigit ,rest; 
		
		extractdigit = num%10; 
		rest = num/10; 
		num = rest ; 
		size++; 
	}
	
	for(int i=1 ; i<=size ; i++){
		int extractdigit , rest ,lastdigit ;
		
		extractdigit = originalnum %10 ; 
		lastdigit = extractdigit+extractdigit; 
		rest = originalnum/10; 
		rest = rest - lastdigit; 
		originalnum = rest; 
		if(originalnum == 7 || originalnum == -7 || originalnum == 0){
			printf("Entered Number is divisible by 7."); 
			break;
		}
	}
	if(originalnum != 7 && originalnum != -7 && originalnum != 0){
			printf("Entered Number isnot divisible by 7."); 
		}
	
		
		return 0; 
}