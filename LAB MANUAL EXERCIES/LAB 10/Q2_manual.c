#include <stdio.h>

struct employee {
    int id;
    char name[50];
    float salary;
    char department[50];
};

int main() {
    struct employee e;   // declaring structure variable

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);  // single-word name (e.g., Ali)

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("Enter Department: ");
    scanf("%s", e.department);

    // Display data
    printf("\n===== Employee Information =====\n");
    printf("Employee ID       : %d\n", e.id);
    printf("Employee Name     : %s\n", e.name);
    printf("Salary            : %.2f\n", e.salary);
    printf("Department        : %s\n", e.department);

    return 0;
}
