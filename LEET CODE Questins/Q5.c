#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    // Create a dummy node to simplify logic
    struct ListNode dummy;
    struct ListNode* tail = &dummy;
    dummy.next = NULL;

    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    // Attach the remaining elements
    if (list1 != NULL) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }

    return dummy.next;
}

// Utility to create a new node
struct ListNode* newNode(int value) {
    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp->val = value;
    temp->next = NULL;
    return temp;
}

// Print linked list
void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }
}

int main() {
    // Example:
    struct ListNode* list1 = newNode(1);
    list1->next = newNode(3);
    list1->next->next = newNode(5);

    struct ListNode* list2 = newNode(2);
    list2->next = newNode(4);
    list2->next->next = newNode(6);

    struct ListNode* merged = mergeTwoLists(list1, list2);

    printf("Merged List: ");
    printList(merged);

    return 0;
}
