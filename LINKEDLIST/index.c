#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


void traverse(struct Node* head){
    
    while(head->next != NULL){
        printf("%d\n", head->data);
        head = head->next;
    }

}



int main() {
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));
    struct Node* forth = malloc(sizeof(struct Node));
    struct Node* fifth = malloc(sizeof(struct Node));

    head->data = 10;
    second->data = 100;
    third->data = 1000;
    forth->data = 10000;
    fifth->data = 10000;

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = NULL;


    traverse(head);



    



    return 0;
}