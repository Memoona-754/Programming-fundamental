#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book b;

    printf("Enter Book Title: ");
    gets(b.title);   

    printf("Enter Author Name: ");
    gets(b.author);

    printf("Enter Book Price: ");
    scanf("%f", &b.price);

    printf("\n--- Book Details ---\n");
    printf("Title : %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price : %.2f\n", b.price);

    return 0;
}
