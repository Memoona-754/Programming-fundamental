//lab 7 pg.44

#include <stdio.h> 
int main( ){ 
int matrix[2][2], transpose[2][2], row, col; 
printf("\nEnter elements of matrix:\n"); 
for(row=0; row<2; row++)                 
// Storing elements of the matrix 
for(col=0; col<2; col++){ 
printf("Enter element a[%d][%d]: ",row,col); 
scanf("%d", &matrix[row][col]); 
} 
printf("\nEntered Matrix: \n"); // Displaying the matrix[][] 
for(row=0; row<2; row++) 
for(col=0; col<2; col++){ 
printf("%d  ", matrix[row][col]); 
if (col == 1) 
printf("\n\n"); 
} 
for(row=0; row<2; row++) // Finding the transpose of matrix  
for(col=0; col<2; col++){ 
}transpose[col][row] = matrix[row][col]; 
printf("\nTranspose of Matrix:\n"); // Displaying the transpose of matrix 
for(row=0; row<2; row++) 
for(col=0; col<2; col++){ 
printf("%d  ",transpose[row][col]); 
if(col==1) 
printf("\n\n"); 
} 
return 0; 
}