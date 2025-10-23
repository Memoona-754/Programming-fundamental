#include <stdio.h>

int main() {
    int pages, people;
    int totalCopies, totalPages, reams;

    printf("Enter number of pages in one report: ");
    scanf("%d", &pages);

    printf("Enter number of people attending: ");
    scanf("%d", &people);

    totalCopies = people + 5;           
    totalPages = totalCopies * pages;  

    reams = totalPages / 500;          
    if (totalPages % 500 != 0) {     
        reams = reams + 1;
    }

    printf("\nTotal pages needed: %d", totalPages);
    printf("\nReams of paper to order: %d\n", reams);

    return 0;
}
