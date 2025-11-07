 #include<stdio.h>
    int main(){
    int x, original, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

    original = x;  // store original value

    // Negative numbers cannot be palindrome
    if (x < 0) {
        printf("false\n");
        return 0;
    }

    // Reverse the number
    while (x > 0) {
        int digit = x % 10;        // get last digit
        reversed = reversed * 10 + digit;  
        x = x / 10;                // remove last digit
    }

    // Check palindrome
    if (reversed == original)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}