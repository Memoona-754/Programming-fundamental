#include <stdio.h>
#include <stdlib.h>

// Definition of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

// Function to insert a node at the end
void append(struct Node** head, int data) {
    struct Node* node = newNode(data);
    if (*head == NULL) {
        *head = node;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = node;
}

// Function to add two linked lists
struct Node* addTwoNumbers(struct Node* l1, struct Node* l2) {
    struct Node *result = NULL, **lastPtr = &result;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry) {
        int sum = carry;

        if (l1 != NULL) {
            sum += l1->data;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->data;
            l2 = l2->next;
        }

        carry = sum / 10;
        sum = sum % 10;

        append(lastPtr, sum);
        while (*lastPtr) lastPtr = &((*lastPtr)->next);
    }

    return result;
}

// Function to print the linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node *l1 = NULL, *l2 = NULL, *sum = NULL;
    int n1, n2, val;

    printf("Enter number of digits in first number: ");
    scanf("%d", &n1);
    printf("Enter digits of first number (in reverse order): ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &val);
        append(&l1, val);
    }

    printf("Enter number of digits in second number: ");
    scanf("%d", &n2);
    printf("Enter digits of second number (in reverse order): ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &val);
        append(&l2, val);
    }

    sum = addTwoNumbers(l1, l2);

    printf("Sum (in reverse order): ");
    printList(sum);

    return 0;
}
