/*Write a program which will input a 5-digit number. If the sum of digits is even, find whether the 
input number is a prime or not. If the sum of digits is odd find, whether the number is palindrome 
or not? 
Example of prime number: A number which is only divisible by itself and 1 i.e., 7, 11, and13. 
Example of a Palindrome: A number whose reverse order is the same as the original number 
i.e., 11211, 44344.  */

#include <stdio.h>
int main() {
    int num, sum = 0, temp, rem, rev = 0, i, isPrime = 1;

    printf("Enter a number : ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        rem = temp % 10;
        sum += rem;
        rev = rev * 10 + rem;
        temp /= 10;     
    }

    printf("Sum of digits = %d\n", sum);

    if (sum % 2 == 0) {
        printf("Sum is even. Checking prime...\n");

        if (num < 2)
            isPrime = 0;

        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;      
                break;
            }
        }

        if (isPrime)
            printf("%d is PRIME.\n", num);
        else
            printf("%d is NOT prime.\n", num);
    }

    else {
        printf("Sum is odd. Checking palindrome...\n");

        if (rev == num)
            printf("%d is a PALINDROME.\n", num);
        else
            printf("%d is NOT a palindrome.\n", num);
    }

    return 0;
}

/*Write a program which will input a 5-digit number. If the sum of digits is even, find whether the 
input number is a prime or not. If the sum of digits is odd find, whether the number is palindrome 
or not? 
Example of prime number: A number which is only divisible by itself and 1 i.e., 7, 11, and13. 
Example of a Palindrome: A number whose reverse order is the same as the original number 
i.e., 11211, 44344.  */

#include <stdio.h>
int main () {
	int num , originalnum , sum = 0 ; 
	
	printf("Input Num = "); 
	scanf("%d" ,&num); 
	
	originalnum = num ; //stores original value of the input number.
	
	// Calculate sum of digits of num.
	for(int i = 1 ; i <= 5 ; i++){
		int extractdigit , rest ; 
		
		extractdigit = num % 10 ; 
		rest = num / 10 ; 
		sum += extractdigit ; 
		num = rest ; 
	}
	
	// checking if sum is of the digits is even. 
	if (sum % 2 == 0) {
		
		// check if entered num is prime or not.
		int isprime = 1; 
		
		/* to check if number is prime or not , loop is always started from (i=2),
	     because every number is divisible by 1 , and it's checked till originalnum/2
	     it ensures safety originalnum/2 tk check krrna is safe */
	     
		for (int i = 2 ; i <= originalnum/2 ; i++) {
			if ( originalnum % i == 0 ) {
				isprime = 0; 
				break ; 
			}
		}
		
		// printing by checking isprime or notprime.
		
		if( isprime == 0){
			printf("Entered Number is not prime.");
		}
		else {
			printf("Entered Number is Prime.");
		}
		
		return 0; 
	}
	
	// checking if sum of digits is odd.
	if (sum % 2 != 0){
		
		// checking if entered number is palindrome or not.
		
		int reverse = 0; 
		int extractdigit , rest; 
		int numcopy = originalnum ; 
		
		for(int i = 1 ; i <= 5 ; i++){
			extractdigit = numcopy % 10 ; 
			rest = numcopy / 10 ; 
			reverse = reverse*10 + extractdigit ; 
			numcopy = rest ; 
		}
		
		// checking if palindrome or not . 
		if( reverse == originalnum ){
			printf("Entered Number is Palindrome!");
		}
		else {
			printf("Entered Number is not Palindrome.");
		}
	}
	return 0; 
}
