#include <stdio.h>
#include <string.h>

struct Course {
    char courseName[50];
    float gpa;
};

struct Address {
    char street[50];
    char city[50];
    char state[50];
    int zip;
};

struct Student {
    float cgpa;
    struct Course course[2];
    struct Address addr;
};

int main() {

    struct Student s1, s2;
    int i;

    // Input Student 1
    printf("Enter data for Student 1:\n");
    printf("Enter CGPA: ");
    scanf("%f", &s1.cgpa);

    for(i = 0; i < 2; i++) {
        printf("Enter Course %d Name: ", i+1);
        scanf("%s", s1.course[i].courseName);

        printf("Enter GPA in %s: ", s1.course[i].courseName);
        scanf("%f", &s1.course[i].gpa);
    }

    printf("Enter Street: ");
    scanf("%s", s1.addr.street);
    printf("Enter City: ");
    scanf("%s", s1.addr.city);
    printf("Enter State: ");
    scanf("%s", s1.addr.state);
    printf("Enter ZIP: ");
    scanf("%d", &s1.addr.zip);

    printf("\n----------------------------------\n");

    // Input Student 2
    printf("Enter data for Student 2:\n");
    printf("Enter CGPA: ");
    scanf("%f", &s2.cgpa);

    for(i = 0; i < 2; i++) {
        printf("Enter Course %d Name: ", i+1);
        scanf("%s", s2.course[i].courseName);

        printf("Enter GPA in %s: ", s2.course[i].courseName);
        scanf("%f", &s2.course[i].gpa);
    }

    printf("Enter Street: ");
    scanf("%s", s2.addr.street);
    printf("Enter City: ");
    scanf("%s", s2.addr.city);
    printf("Enter State: ");
    scanf("%s", s2.addr.state);
    printf("Enter ZIP: ");
    scanf("%d", &s2.addr.zip);



    printf("\n=============== COMPARISON RESULT ===============\n");

    // Compare GPA of each course
    for(i = 0; i < 2; i++) {
        printf("\nCourse: %s\n", s1.course[i].courseName);

        if(s1.course[i].gpa > s2.course[i].gpa)
            printf("Student 1 has higher GPA (%.2f)\n", s1.course[i].gpa);
        else if(s2.course[i].gpa > s1.course[i].gpa)
            printf("Student 2 has higher GPA (%.2f)\n", s2.course[i].gpa);
        else
            printf("Both students have equal GPA (%.2f)\n", s1.course[i].gpa);
    }

    // Compare CGPA
    printf("\nComparing overall CGPA:\n");

    if(s1.cgpa > s2.cgpa)
        printf("Student 1 has higher CGPA (%.2f)\n", s1.cgpa);
    else if(s2.cgpa > s1.cgpa)
        printf("Student 2 has higher CGPA (%.2f)\n", s2.cgpa);
    else
        printf("Both students have equal CGPA (%.2f)\n", s1.cgpa);

    return 0;
}
