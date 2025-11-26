#include <stdio.h>

// Function declarations
int inputdimensions(int *r1, int *c1, int *r2, int *c2);
void inputMatrix(int matrix[10][10], int rows, int colms, char name);
void multiplyMatrix(int a[10][10], int b[10][10], int c[10][10], int r1, int c1, int r2, int c2);
void transposeMatrix(int src[10][10], int dst[10][10], int rows, int colms);
void printMatrix(int matrix[10][10], int rows, int colms);

int main() {
     int r1,c1,r2,c2;

    if (!inputdimensions(&r1, &c1, &r2, &c2)){
        printf("Matrix multiplication is not possible\n");
        return 0;
    }

    int a[10][10], b[10][10], c[10][10], t[10][10];

    inputMatrix(a, r1, c1, 'A');
    inputMatrix(b, r2, c2, 'B');

    multiplyMatrix(a, b, c, r1, c1, r2, c2);

    /* c is r1 x c2; transpose into t which will be c2 x r1 */
    transposeMatrix(c, t, r1, c2);

    printMatrix(t, c2, r1);

     return 0;
}

int inputdimensions(int *r1, int *c1, int *r2, int *c2){

      printf("Enter rows and columns of Matrix A: ");
      if (scanf("%d %d", r1, c1) != 2) return 0;
      printf("Enter rows and columns of Matrix B: ");
      if (scanf("%d %d", r2, c2) != 2) return 0;

      /* For matrix multiplication A (r1 x c1) * B (r2 x c2), require c1 == r2 */
      if (*c1 != *r2) {
          /* Multiplication not possible */
          return 0;
      }
      return 1;
}

void inputMatrix(int matrix[10][10],int rows, int colms,char name){
    
    printf("Enter elements of Matrix %c(%d %d)",name,rows,colms);
    for(int i=0;i<rows;i++){
        for(int j=0;j<colms;j++){
            printf("%c [%d][%d]",name,i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
}

void multiplyMatrix(int a[10][10], int b[10][10], int c[10][10], int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            c[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void transposeMatrix(int c[10][10], int t[10][10], int rows,int colms){
    for(int i=0;i<rows;i++){
        for(int j=0;j<colms;j++){
            t[j][i]=c[i][j];
        }
        // printf("The transpose of Multiplied Matrix is :");
         //scanf("%d %d",&c2,&r1);
    }
}

void printMatrix(int matrix[10][10], int rows, int colms){
    printf("\nResultant Matrix (A x B):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {
            printf("%5d ", matrix[i][j]);
        }
        printf("\n");
    }
}