#include <stdio.h>

// Define the structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to print values using temp != NULL condition
void printList1(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to print values using temp->next != NULL condition
void printList2(struct Node* head) {
    struct Node* temp = head;
    while (temp->next != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

}

int main() {
    // Create the linked list with values 1, 2, 3, 4, 5, 6
    struct Node node1 = {1, NULL};
    struct Node node2 = {2, NULL};
    struct Node node3 = {3, NULL};
    struct Node node4 = {4, NULL};
    struct Node node5 = {5, NULL};
    struct Node node6 = {6, NULL};

    // Link the nodes to form the linked list
    struct Node* head = &node1;
    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;
    node5.next = &node6;

    // Print values using temp != NULL condition
    printList1(head);

    // Print values using temp->next != NULL condition
    printList2(head);

    return 0;
}
