#include<stdio.h>
void inputMatrix(int *rows, int *cols, int matrix[10][10]){
	printf("Enter rows & columns of Matrix:");
	scanf("%d %d",rows,cols);
	for(int i=0; i<*rows; i++){
		for(int j=0; j<*cols; j++){
			printf("[%d][%d]=",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
} 
void transposeMatrix(int *rows, int *cols, int matrix[10][10],int T[10][10]){
	for(int i=0; i<*rows; i++){
		for(int j=0; j<*cols; j++){
			T[j][i]=matrix[i][j];
		}
	}
}
	void printMatrix(int  T[10][10], int rows, int cols, char name[10]){
	printf("%s Matrix:\n",name);
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			printf("%d ",T[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int rows,cols,A[10][10],T[10][10];
	inputMatrix(&rows,&cols,A);
	transposeMatrix(&rows,&cols,A,T);
	printMatrix(A,rows,cols,"Provided");
	printMatrix(T,cols,rows,"Transposed");
}