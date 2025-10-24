 #include <stdio.h>
 #include <string.h>
 int main() {
    char a[20] = "Good";
    char b[] = "Morning";
    strcat(a, b);
    printf("Result: %s", a);
    return 0;
 }
 