#include <stdio.h>
int main() {
     int numTypes, qty1, qty2, qty3, qty4;
     char c1, c2, c3, c4;
     int total = 0, price = 0;

       printf("ABC Restaurant Online Order Placement\n");
       printf("WELCOME!\n\n");

            printf("B = Burger (200)\n");
            printf("F = French Fries (50)\n");
            printf("P = Pizza (500)\n");
            printf("S = Sandwiches (150)\n\n");

      printf("How many types of snacks you need to order (1-4): ");
      scanf("%d", &numTypes);

    if (numTypes < 1 || numTypes > 4) {
        printf("Invalid number of snack types!\n");
        return 0;
    }
    /* ---------------- Type 1 ---------------- */
    printf("Enter first snack (B/F/P/S): ");
    scanf(" %c", &c1);
    printf("Enter quantity: ");
    scanf("%d", &qty1);

    switch (c1) {
        case 'B': case 'b':
           price = qty1 * 200;
           printf("%d Burger(s) = %d PKR\n", qty1, price); 
           total += price; 
           break;
        case 'F': case 'f':  
           price = qty1 * 50;  
           printf("%d Fries = %d PKR\n", qty1, price); 
           total += price; 
           break;
        case 'P': case 'p': 
           price = qty1 * 500; 
           printf("%d Pizza(s) = %d PKR\n", qty1, price); 
           total += price; 
           break;
        case 'S': case 's': 
           price = qty1 * 150; 
           printf("%d Sandwich(es) = %d PKR\n", qty1, price); 
           total += price; 
           break;
        default: 
           printf("Invalid choice!\n");
    }
    /* ---------------- Type 2 ---------------- */
    if (numTypes >= 2) {
        printf("Enter second snack (B/F/P/S): ");
        scanf(" %c", &c2);
        printf("Enter quantity: ");
        scanf("%d", &qty2);

        switch (c2) {
            case 'B': case 'b': 
                price = qty2 * 200;  
                printf("%d Burger(s) = %d PKR\n", qty2, price);  
                total += price;  
                break;
            case 'F': case 'f':  
                price = qty2 * 50;  
                printf("%d Fries = %d PKR\n", qty2, price); 
                total += price; 
                break;
            case 'P': case 'p': 
                price = qty2 * 500; 
                printf("%d Pizza(s) = %d PKR\n", qty2, price); 
                total += price; 
                break;
            case 'S': case 's': 
                price = qty2 * 150; 
                printf("%d Sandwich(es) = %d PKR\n", qty2, price); 
                total += price; 
                break;
            default: 
            printf("Invalid choice!\n");
        }
    }
    /* -------------- Type 3 ---------------- */
    if (numTypes >= 3) {
        printf("Enter third snack (B/F/P/S): ");
        scanf(" %c", &c3);
        printf("Enter quantity: ");
        scanf("%d", &qty3);

        switch (c3) {
            case 'B': case 'b': 
                price = qty3 * 200; 
                printf("%d Burger(s) = %d PKR\n", qty3, price); 
                total += price; 
                break;
            case 'F': case 'f': 
                price = qty3 * 50; 
                printf("%d Fries = %d PKR\n", qty3, price); 
                total += price; 
                break;
            case 'P': case 'p': 
                price = qty3 * 500; 
                printf("%d Pizza(s) = %d PKR\n", qty3, price); 
                total += price; 
                break;
            case 'S': case 's': 
                price = qty3 * 150; 
                printf("%d Sandwich(es) = %d PKR\n", qty3, price); 
                total += price; 
                break;
            default: 
                printf("Invalid choice!\n");
        }
    }
    /* -------------- Type 4 ---------------- */
    if (numTypes == 4) {
        printf("Enter fourth snack (B/F/P/S): ");
        scanf(" %c", &c4);
        printf("Enter quantity: ");
        scanf("%d", &qty4);

        switch (c4) {
            case 'B': case 'b': 
                price = qty4 * 200; 
                printf("%d Burger(s) = %d PKR\n", qty4, price); 
                total += price; 
                break;
            case 'F': case 'f': 
                price = qty4 * 50; 
                printf("%d Fries = %d PKR\n", qty4, price); 
                total += price; 
                break;
            case 'P': case 'p': 
                price = qty4 * 500; 
                printf("%d Pizza(s) = %d PKR\n", qty4, price); \
                total += price; 
                break;
            case 'S': case 's': 
                price = qty4 * 150; 
                printf("%d Sandwich(es) = %d PKR\n", qty4, price); 
                total += price; 
                break;
            default: 
                printf("Invalid choice!\n");
        }
    }

    printf("\n-----------------------------------------\n");
    printf("Total Bill: %d PKR\n", total);
    printf("Thank you for your order!\n");

    return 0;
}