#include <stdio.h>
#include <string.h>

int maxFrequency(char str[]) {
    int freq[256] = {0};
    int i, max = 0;

    for (i = 0; str[i] != '\0'; i++) {
        // Ignore spaces
        if (str[i] != ' ') {
            freq[(unsigned char)str[i]]++;
            if (freq[(unsigned char)str[i]] > max)
                max = freq[(unsigned char)str[i]];
        }
    }

    return max;
}

int main() {
    char name[100], course[200];

    // Input student name
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline if fgets stores it
    name[strcspn(name, "\n")] = '\0';

    // Input course name
    printf("Enter course name: ");
    fgets(course, sizeof(course), stdin);
    course[strcspn(course, "\n")] = '\0';

    // Calculate max frequency
    int maxName = maxFrequency(name);
    int maxCourse = maxFrequency(course);

    // Output
    printf("\nMaximum frequency in your name: %d\n", maxName);
    printf("Maximum frequency in course name: %d\n", maxCourse);

    return 0;
}
