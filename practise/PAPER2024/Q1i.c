#include <stdio.h>

int main() {
    // Array to store 11 names, each up to 49 characters
    char members[11][50] = {
        "Ali",
        "Sara",
        "Hassan",
        "Ayesha",
        "Fahad",
        "Zain",
        "Umer",
        "Hina",
        "Taha",
        "Asma",
        "Bilal"
    };

    printf("List of Koderz Club Executive Members:\n");

    // Display all names
    for (int i = 0; i < 11; i++) {
        printf("%d. %s\n", i + 1, members[i]);
    }

    return 0;
}

