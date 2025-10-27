#include <stdio.h>
#include <string.h>   // Required for strncpy()

int main() {
    char src[] = "Programming";
    char dest[5];     // We want to copy only 4 characters + 1 for '\0'

    // Copy first 4 characters
    strncpy(dest, src, 4);

    // Manually add null terminator
    dest[4] = '\0';

    printf("Source string: %s\n", src);
    printf("Copied string (first 4 letters): %s\n", dest);

    return 0;
}
