#include<Stdio.h>
int inputDimensions(int *r1, int *c1, int *r2, int *c2 ){
	printf("Enter Rows & Columns for Matrix A:");
	scanf("%d %d",r1,c1);
	printf("Enter Rows & Columns for Matrix B:");
	scanf("%d %d",r2,c2);
	if(*c1!=*r2) return 0;
	else return 1;
}
void inputMatrix(int matrix[10][10], int rows, int cols, char name){
	printf("Enter elements of matrix %c(%dx%d)\n",name,rows,cols);
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			printf("%c[%d][%d]=",name,i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
}
void multiplyMatrix(int a[10][10], int b[10][10], int c[10][10], int r1, int c1, int r2, int c2){
	for(int i=0; i<r1; i++){
		for(int j=0; j<c2; j++){
			c[i][j]=0;
			for(int k=0; k<c1; k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
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
void printMatrix(int matrix[10][10], int rows, int cols, char name[20]){
	printf("%s Matrix:\n",name);
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}
int main(){
    int r1,c1,r2,c2;

    if(!inputDimensions(&r1,&c1,&r2,&c2)){
        printf("Matrix Multiplication not possible.");
        return 0;
    }

    int a[10][10],b[10][10],c[10][10],T[10][10];

    inputMatrix(a,r1,c1,'A');
    inputMatrix(b,r2,c2,'B');

    multiplyMatrix(a,b,c,r1,c1,r2,c2);
    printMatrix(c,r1,c2,"Multiplied(AxB)");

    int tr = r1;   // rows of C
    int tc = c2;   // cols of C

    transposeMatrix(&tr,&tc,c,T);
    printMatrix(T, tc, tr, "Transposed");

    return 0;
}