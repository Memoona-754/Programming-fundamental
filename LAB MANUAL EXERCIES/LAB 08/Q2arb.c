#include <stdio.h>

int main() {
    char string[200];

    printf("Enter string: ");
    fgets(string, sizeof(string), stdin);

    // ---- LENGTH CALCULATE MANUALLY ----
    int len = 0;
    while(string[len] != '\0') {  
        len++;
    }

    // ---- REMOVE NEWLINE MANUALLY ----
    if(len > 0 && string[len-1] == '\n') {
        string[len-1] = '\0';
        len--;
    }

    int max = 0;

    // ---------- STEP 1: Find MAX FREQUENCY ----------
    for(int i = 0; i < len; i++) {
        if(string[i] == ' ') continue;

        int count = 1;
        for(int j = i + 1; j < len; j++) {
            if(string[j] == ' ') continue;
            if(string[i] == string[j]) count++;
        }

        if(count > max) {
            max = count;
        }
    }

    // ---------- STEP 2: Print ALL letters with max freq ----------
    for(int i = 0; i < len; i++) {

        if(string[i] == ' ') continue;

        // Check duplicate manually
        int already = 0;
        for(int k = 0; k < i; k++) {
            if(string[k] == string[i]) {
                already = 1;
                break;
            }
        }

        if(already == 0) {
            int count = 1;
            for(int j = i + 1; j < len; j++) {
                if(string[j] == ' ') continue;
                if(string[i] == string[j]) count++;
            }

            if(count == max) {
                printf("%c appeared %d times.\n", string[i], max);
            }
        }
    }

    return 0;
}