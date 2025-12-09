#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char courses[5][100];
    char allCourses[500] = "";
    int freqName[256] = {0};
    int freqCourse[256] = {0};
    int i, j, n;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("How many courses are you taking? ");
    scanf("%d", &n);
    getchar(); // remove newline

    printf("\nEnter course names (e.g., Programming Fundamentals):\n");
    for (i = 0; i < n; i++) {
        fgets(courses[i], sizeof(courses[i]), stdin);
        strcat(allCourses, courses[i]); // combine all courses
    }

    // Count frequency in name
    for (i = 0; i < strlen(name); i++) {
        freqName[(unsigned char)name[i]]++;
    }

    // Count frequency in all course names
    for (i = 0; i < strlen(allCourses); i++) {
        freqCourse[(unsigned char)allCourses[i]]++;
    }

    // Find max frequency in name
    int maxN = 0;
    char maxCharName;

    for (i = 0; i < 256; i++) {
        if (freqName[i] > maxN && i != ' ' && i != '\n') {
            maxN = freqName[i];
            maxCharName = i;
        }
    }

    // Find max frequency in course names
    int maxC = 0;
    char maxCharCourse;

    for (i = 0; i < 256; i++) {
        if (freqCourse[i] > maxC && i != ' ' && i != '\n') {
            maxC = freqCourse[i];
            maxCharCourse = i;
        }
    }

    printf("\n--- RESULT ---\n");
    printf("Most frequent character in your NAME: '%c' occurs %d times.\n", maxCharName, maxN);
    printf("Most frequent character in your COURSES: '%c' occurs %d times.\n", maxCharCourse, maxC);

    return 0;
}
