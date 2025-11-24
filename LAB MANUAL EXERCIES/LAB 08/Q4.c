// #include <stdio.h>

// int main() {
//     char a[11] = "hello world";
//     int i;

//     for(i = 0; i <= 9; i++) {
//         a[i] = a[i + 1];
//         printf("%d\t%s\n", i, a);
//     }

//     printf("\n%s", a);

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     char a[12] = "hello world";
//     int i;

//     for(i = 0; i <= 9; i++) {
//         a[i] = a[i+1];
//         a[10] = '\0';   // ← FIX: always put null terminator back
//         printf("%d\t%s\n", i, a);
//     }

//     printf("\n%s", a);
// }

#include <stdio.h>

int main() {
    char a[12] = "hello world";
    int i;

    for(i = 0; i <= 9; i++) {
        a[i] = a[i+1];
        a[11 - i] = '\0';  // null terminator moves left
        printf("%d\t%s\n", i, a);
    }

    printf("\n%s", a);
}
