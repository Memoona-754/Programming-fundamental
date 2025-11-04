#include <stdio.h>
#include <string.h> 

int main() {
    char src[] = "Programming";
    char dest[5];     

    strncpy(dest, src, 4);
    dest[4] = '\0';

    printf("Source string: %s\n", src);
    printf("Copied string (first 4 letters): %s\n", dest);

    return 0;
}
