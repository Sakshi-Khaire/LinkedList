#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} NODE;


NODE* createNode(int data) {
    NODE* ptr = (NODE*)malloc(sizeof(NODE));
    ptr->data = data;
    ptr->next = NULL;
    return ptr;
}


void addAtFirst(NODE** root, int data) {
    NODE* ptr = createNode(data);
    if(*root == NULL) {
        *root = ptr;
        return;
    }
    ptr->next = *root;
    *root = ptr;
}

void addAtEnd(NODE** root, int data) {
    NODE* ptr = createNode(data);
    if(*root == NULL) {
        *root = ptr;
        return;
    }

    NODE* ptrTravel = *root;
    while(ptrTravel->next != NULL) {
        ptrTravel = ptrTravel->next;
    }
    ptrTravel->next = ptr;
}

void deleteFirst(NODE** root) {
    if(*root == NULL) {
        printf("\nNo data is present in the linked list");
        return;
    }
    NODE* ptr = *root;
    *root = ptr->next;
    free(ptr);
}

void deleteLast(NODE** root) {
    if(*root == NULL) {
        printf("\nNo data is present in the linked list");
        return;
    }
    NODE* ptrTravel = *root;
    NODE* ptrPrev = NULL;
    while(ptrTravel->next != NULL) {
        ptrPrev = ptrTravel;
        ptrTravel = ptrTravel->next;
    }
    ptrPrev->next = NULL;
    free(ptrTravel);
}

void printList(NODE* root) {
    if(root == NULL) {
        printf("\nLinked list is empty");
        return;
    }
    NODE* ptrTravel = root;
    while(ptrTravel != NULL) {
        printf("%d\n", ptrTravel->data);
        ptrTravel = ptrTravel->next;
    }
}


int main() {
    NODE* head = NULL;
    addAtFirst(&head, 23);
    addAtFirst(&head, 36);
    addAtFirst(&head, 48);
    addAtFirst(&head, 54);
    addAtEnd(&head, 97);
    deleteLast(&head);
    deleteFirst(&head);
    printList(head);
    return 0;
}