

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void insertAfter(struct Node* head, int target, int data) {
    struct Node* current = head;

    while (current != NULL) {
        if (current->data == target) {
            struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
            newNode->data = data;
            newNode->next = current->next;
            current->next = newNode;
            return;
        }
        current = current->next;
    }
    printf("Value %d not found in the list.\n", target);
}


void deleteNode(struct Node** head, int data) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = *head;
    if (temp->data == data) {
        *head = temp->next;
        free(temp);
        return;
    }

    struct Node* prev = NULL;
    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value %d not found in the list.\n", data);
        return;
    }

    prev->next = temp->next;
    free(temp);
}


void traverse(struct Node* head) {
    struct Node* current = head;
    if (current == NULL) {
        printf("List is empty.\n");
        return;
    }

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL; 

    
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtBeginning(&head, 5);
    insertAfter(head, 10, 15);

    printf("List after insertion:\n");
    traverse(head);  //expected Output:5->10->15->20->NULL

    deleteNode(&head, 15);
    printf("List after deletion:\n");
    traverse(head);  //expected Output:5->10->20->NULL

    return 0;
}


