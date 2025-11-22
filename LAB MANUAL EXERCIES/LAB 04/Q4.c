/*Write a C program to find all roots of a quadratic equation by using the given formula; it is 
required to take user input for a, b and c values.*/

#include <stdio.h>
#include <math.h>
int main () {
	float a , b , c , determinant=0.0 ,root1 = 0.0 , root2 = 0.0 ; 
	float realpart , imagpart; 
	printf("Input Value of a = "); 
	scanf("%f" , &a); 
	
	printf("Input Value of b = "); 
	scanf("%f" ,&b); 
	
	printf("Input Value of c = ");
	scanf("%f" ,&c); 
	
	determinant = b*b - 4*a*c; 
	
	if(determinant > 0) {
		root1 = (-b + sqrt(determinant)) / (2*a); 
		root2 = (-b - sqrt(determinant)) / (2*a); 
		printf("Roots are Real and Different.\n"); 
		printf("Root 1 : %.2f\nRoot 2 : %.2f\n" ,root1 , root2);
	}
	
	else if  (determinant == 0) {
		root1 = root2 = -b/(2*a);
		printf("Roots are Real and Equal.\nRoot 1 = Root2 = %.2f\n" ,root1);
	}
	
	else if  (determinant < 0){
		realpart = -b/(2*a); 
		imagpart = (sqrt(-determinant))/(2*a); 
		printf("Roots are Complex.\n"); 
		printf("Root 1: %.2f + i%.2f\n" ,realpart ,imagpart);
		printf("Root 2: %.2f - i%.2f\n" ,realpart ,imagpart);
	}
	
	return 0; 
}