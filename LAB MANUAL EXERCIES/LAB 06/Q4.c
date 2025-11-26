#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char username[20], password[20];
    char loginUser[20], loginPass[20];

    int hasUpper, hasLower, hasDigit;

    // -------- Registration --------
    printf("Create Username (5 alphabets): ");
    scanf("%s", username);

    // Check username length
    if (strlen(username) != 5) {
        printf("Error: Username must be exactly 5 alphabets.\n");
        return 0;
    }

    // Check username contains only alphabets
    for (int i = 0; i < 5; i++) {
        if (!isalpha(username[i])) {
            printf("Error: Username must contain only letters.\n");
            return 0;
        }
    }

    // -------- Password Input --------
    printf("Create Password (6 characters, 1 upper, 1 lower, 1 digit): ");
    scanf("%s", password);

    if (strlen(password) != 6) {
        printf("Error: Password must be exactly 6 characters.\n");
        return 0;
    }

    // Validate password
    hasUpper = hasLower = hasDigit = 0;

    for (int i = 0; i < 6; i++) {
        if (isupper(password[i])) hasUpper = 1;
        if (islower(password[i])) hasLower = 1;
        if (isdigit(password[i])) hasDigit = 1;
    }

    if (!hasUpper || !hasLower || !hasDigit) {
        printf("Error: Password must contain 1 upper, 1 lower, and 1 digit.\n");
        return 0;
    }

    printf("\nAccount Created Successfully!\n\n");

    // -------- Login --------
    printf("Login Username: ");
    scanf("%s", loginUser);

    printf("Login Password: ");
    scanf("%s", loginPass);

    // Compare login details
    if (strcmp(username, loginUser) == 0 && strcmp(password, loginPass) == 0) {
        printf("\nWelcome %s, you are now logged in.\n", username);
    } else {
        printf("\nIncorrect username or password.\n");
    }

    return 0;
}