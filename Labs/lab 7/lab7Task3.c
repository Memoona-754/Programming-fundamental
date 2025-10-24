#include <stdio.h>
int main() {
int A[2][2], B[2][2], C[2][2] = {0};
printf("Enter elements for Matrix A (2x2):\n");
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 2; j++) {
scanf("%d", &A[i][j]);
}
}
printf("Enter elements for Matrix B (2x2):\n");
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 2; j++) {
scanf("%d", &B[i][j]);
}
}
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 2; j++) {
C[i][j] = 0;
for (int k = 0; k < 2; k++) {
C[i][j] += A[i][k] * B[k][j];
}
}
}

printf("Resultant Matrix:\n");
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 2; j++) {
printf("%d ", C[i][j]);
}
printf("\n");
}
return 0;
}