#include <stdio.h>

struct Employee {
    char name[100];
    int id;
    float salary;
};

int main() {
    struct Employee emp[10];
    int i;

    // Input for 10 employees
    printf("Enter details of 10 employees:\n");

    for(i = 0; i < 10; i++) {
        printf("\nEmployee %d:\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", emp[i].name);

        printf("Enter ID: ");
        scanf("%d",& emp[i].id);

        printf("Enter Salary: ");
        scanf("%f",& emp[i].salary);
    }

    // Display all employee details
    printf("\n--- Employee Details ---\n");
    for(i = 0; i < 10; i++) {
        if(emp[i].salary>emp[i+1].salary){
        emp[i].salary=emp[i+1].salary;
        printf("\nEmployee %d\n", i + 1);
        printf("Name   : %s\n", emp[i].name);
        printf("ID     : %d\n", emp[i].id);
        printf("Salary : %.2f\n", emp[i].salary);
    }
    }
    return 0;
}