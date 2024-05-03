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






    return 0;
}