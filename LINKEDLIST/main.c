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

    


    traverseLL(head);

    head = insertAtBeginning(head, 200);
    traverseLL(head);






    return 0;
}