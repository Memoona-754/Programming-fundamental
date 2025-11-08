#include <stdio.h>
int main(){
    char username[10], password[10];
    char u_input[10], p_input[10];
    int i, valid, digit, upper, lower;

    // USERNAME (exactly 5 alphabets)
    while (1) {
        printf("Enter username (5 alphabets): ");
        scanf("%s", username);

        valid = 1;

        // check length manually
        for (i = 0; username[i] != '\0'; i++);
        if (i != 5)
            valid = 0;

        // check alphabets manually
        for (i = 0; username[i] != '\0'; i++) {
            if (!((username[i] >= 'A' && username[i] <= 'Z') ||
                  (username[i] >= 'a' && username[i] <= 'z'))) {
                valid = 0;
            }
        }

        if (valid == 1)
            break;
        else
            printf("Invalid username! Try again.\n");
    }

    // PASSWORD (6 chars: 1 digit, 1 upper, 1 lower)
    while (1) {
        printf("Enter password (6 chars: 1 digit, 1 upper, 1 lower): ");
        scanf("%s", password);

        // reset conditions
        digit = upper = lower = 0;

        // check length
        for (i = 0; password[i] != '\0'; i++);
        if (i != 6) {
            printf("Password must be 6 characters!\n");
            continue;
        }

        // check each character
        for (i = 0; i < 6; i++) {
            if (password[i] >= '0' && password[i] <= '9')
                digit = 1;
            if (password[i] >= 'A' && password[i] <= 'Z')
                upper = 1;
            if (password[i] >= 'a' && password[i] <= 'z')
                lower = 1;
        }

        if (digit && upper && lower)
            break;
        else
            printf("Password does not meet requirements!\n");
    }

    printf("\nAccount Created Successfully!\n\n");

    // LOGIN
    while (1) {
        printf("Login Username: ");
        scanf("%s", u_input);

        printf("Login Password: ");
        scanf("%s", p_input);

        // manual string compare
        for (i = 0; u_input[i] == username[i] && username[i] != '\0'; i++);
        valid = (u_input[i] == username[i]);  // username matched

        for (i = 0; p_input[i] == password[i] && password[i] != '\0'; i++);
        int pass_ok = (p_input[i] == password[i]);  // password matched

        if (valid && pass_ok) {
            printf("Welcome %s, you are now logged in.\n", username);
            break;
        } else {
            printf("Incorrect username or password! Try again.\n");
        }
    }
    return 0;
}
