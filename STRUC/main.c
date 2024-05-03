#include <stdio.h>
#include <stdlib.h>

int main() {

    struct Node {
        int data;
        struct Node *next;
    };


    struct Node* head =(struct Node *) malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));

    head->data = 2;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 200;
    third->next = NULL;

    while (head != NULL)
    {
        printf("%d \n", head->data);
        head = head->next;
    }
    


    






    return 0;
}