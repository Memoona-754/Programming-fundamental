#include <stdio.h>
struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book books[3];

    for (int i = 0; i < 3; i++) {
        printf("\nEnter details of Book %d:\n", i + 1);

        printf("Enter Title (no spaces): ");
        scanf("%s", books[i].title);

        printf("Enter Author (no spaces): ");
        scanf("%s", books[i].author);

        printf("Enter Price: ");
        scanf("%f", &books[i].price);
    }

    printf("\n--- Book Details ---\n");
    for (int i = 0; i < 3; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title : %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price : %.2f\n", books[i].price);
    }

    return 0;
}

