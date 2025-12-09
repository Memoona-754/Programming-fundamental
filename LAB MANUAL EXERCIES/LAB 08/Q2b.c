#include <stdio.h>

int main() {
    char name[100];
    char courses[5][100];
    char allCourses[500];
    int i, j, n;

    int freqName[256] = {0};
    int freqCourse[256] = {0};

    printf("Enter your name: ");
    gets(name);    // allowed in simple programs (unsafe but no string.h)

    printf("How many courses? ");
    scanf("%d", &n);
    getchar();  // clear newline

    printf("Enter course names:\n");

    /* Read each course manually */
    for (i = 0; i < n; i++) {
        gets(courses[i]);
    }

    /* Combine all courses manually in allCourses[] */
    int index = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; courses[i][j] != '\0'; j++) {
            allCourses[index++] = courses[i][j];
        }
        allCourses[index++] = ' ';   // add space between courses
    }
    allCourses[index] = '\0';

    /* Count frequency in NAME */
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] != ' ' && name[i] != '\n')
            freqName[(unsigned char)name[i]]++;
    }

    /* Count frequency in COURSES */
    for (i = 0; allCourses[i] != '\0'; i++) {
        if (allCourses[i] != ' ' && allCourses[i] != '\n')
            freqCourse[(unsigned char)allCourses[i]]++;
    }

    /* Find max frequency in NAME */
    int maxN = 0;
    char maxCharName = ' ';

    for (i = 0; i < 256; i++) {
        if (freqName[i] > maxN) {
            maxN = freqName[i];
            maxCharName = i;
        }
    }

    /* Find max frequency in COURSES */
    int maxC = 0;
    char maxCharCourse = ' ';

    for (i = 0; i < 256; i++) {
        if (freqCourse[i] > maxC) {
            maxC = freqCourse[i];
            maxCharCourse = i;
        }
    }

    printf("\n--- RESULT ---\n");
    printf("Most frequent character in your NAME: '%c' occurs %d times.\n",
           maxCharName, maxN);
    printf("Most frequent character in your COURSES: '%c' occurs %d times.\n",
           maxCharCourse, maxC);

    return 0;
}
