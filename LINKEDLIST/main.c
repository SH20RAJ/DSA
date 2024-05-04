#include <stdio.h>
#include <stdlib.h>



struct Node {
    int data;
    struct Node *next;
};

void traverseLL(struct Node* head){
    printf("Traversing the linked list \n");
    struct Node* ptr = head;
    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
    
}

struct Node * insertAtBeginning(struct Node* head, int data){

    struct Node * NewNode = (struct Node *) malloc(sizeof(struct Node)) ;
    NewNode->data =  data;
    NewNode->next = head;
    return NewNode;
}

struct Node * insertAtEnd(struct Node* head, int data){
    struct Node * NewNode = (struct Node *) malloc(sizeof(struct Node)) ;
    NewNode->data =  data;
    NewNode->next = NULL;
    struct Node* ptr = head;
    while (ptr->next!= NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = NewNode;
    return head;
}

struct Node * insertAtIndex(struct Node* head,int index, int data){
    struct Node * ptr = head;
    struct Node * NewNode = (struct Node *) malloc(sizeof(struct Node)) ;
    NewNode->data = data;
    for (int i = 1; i < index; i++)
    {
       ptr = ptr->next;
    }

    NewNode->next = ptr->next;
    ptr->next = NewNode;
    return head;
}

struct Node * deleteAtBegginig(struct Node* head){
    struct Node * ptr  = head;
    head = head->next;
    free(ptr);
    return head;
}

int main() {




    struct Node* head =(struct Node *) malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));

    head->data = 2;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 200;
    third->next = NULL;

    

    head = insertAtIndex(head, 4, 67);

    traverseLL(head);

    // head = insertAtBeginning(head, 200);
    // traverseLL(head);

    // head = insertAtEnd(head, 2000);
    // traverseLL(head);

    // head = deleteAtBegginig(head);
    // traverseLL(head);



    






    return 0;
}