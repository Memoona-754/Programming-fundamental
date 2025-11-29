#include<stdio.h>

int inputdimensions(int *r1,int *c1,int *r2,int *c2);
void inputmatrix(int matrix[10][10],int rows,int cols, char name);
void multiplymatrix(int a[10][10],int b[10][10],int c[10][10],int r1 ,int c1,int r2,int c2);
void transposematrix(int *rows,int *cols,int matrix[10][10],int t[10][10]);
void printmatrix(int matrix[10][10],int rows,int cols,char name[20]);
int main(){
    int r1,c1,r2,c2;

    if(!inputdimensions(&r1,&c1,&r2,&c2)){
       printf("Matrix multiplication is not possible");
       return 0;}
      
     int a[10][10],b[10][10],c[10][10],t[10][10];

     inputmatrix(a,r1,c1,'A');
     inputmatrix(b,r2,c2,'B');

     multiplymatrix(a,b,c,r1,c1,r2,c2);
     printmatrix(c , r1, c2,"Multiplied matrix");

     int tr=r1;
     int tc=c2;

     transposematrix(&tr,&tc,c,t);
     printmatrix( t , tr , tc ,"Transposed matrix");

     return 0;
    }
    int inputdimensions(int *r1,int *c1,int *r2,int *c2){
    printf("Enter rows and colmbs of Matrix A:");
    scanf("%d %d",r1,c1);
     printf("Enter rows and colmbs of Matrix B:");
    scanf("%d %d",r2,c2);

    if(*c1!=*r2){
    return 0;}
    else {
        return 1;}
}
void inputmatrix(int matrix[10][10],int rows,int cols, char name){
    printf("Enter elements of Matrix %c(%dx%d)\n",name,rows,cols);
      for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%c[%d][%d]", name, i+1 , j+1);
            scanf("%d",&matrix[i][j]);
        }
      }
}
void multiplymatrix(int a[10][10],int b[10][10],int c[10][10],int r1 ,int c1,int r2,int c2){
      for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            c[i][j]=0;
            for(int k=0;k<c1;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
      }
}
void transposematrix(int *rows,int *cols,int matrix[10][10],int t[10][10]){
    for(int i=1;i<=*rows;i++){
        for(int j=1;j<=*cols;j++){
            t[j][i]=matrix[i][j];
        }
    }
}
void printmatrix(int matrix[10][10],int rows,int cols,char name[20]){
    printf("%s :\n",name);
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=cols; j++){
            printf("%d ",matrix[i][j]);
        }   
        printf("\n");
    }
}