#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Stack structure
typedef struct {
    int items[MAX];
    int top;
} Stack;

// Function prototypes
void initialize(Stack* s);
int isEmpty(Stack* s);
int isFull(Stack* s);
void push(Stack* s, int value);
int pop(Stack* s);
int peek(Stack* s);

int main() {
    Stack stack;
    initialize(&stack);

    int choice, value;
    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Check if Empty\n");
        printf("5. Check if Full\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (!isFull(&stack)) {
                    printf("Enter value to push: ");
                    scanf("%d", &value);
                    push(&stack, value);
                } else {
                    printf("Stack is full!\n");
                }
                break;
            case 2:
                if (!isEmpty(&stack)) {
                    value = pop(&stack);
                    printf("Popped value: %d\n", value);
                } else {
                    printf("Stack is empty!\n");
                }
                break;
            case 3:
                if (!isEmpty(&stack)) {
                    printf("Top value: %d\n", peek(&stack));
                } else {
                    printf("Stack is empty!\n");
                }
                break;
            case 4:
                if (isEmpty(&stack)) {
                    printf("Stack is empty!\n");
                } else {
                    printf("Stack is not empty.\n");
                }
                break;
            case 5:
                if (isFull(&stack)) {
                    printf("Stack is full!\n");
                } else {
                    printf("Stack is not full.\n");
                }
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function to initialize the stack
void initialize(Stack* s) {
    s->top = -1;
}

// Function to check if the stack is empty
int isEmpty(Stack* s) {
    return s->top == -1;
}

// Function to check if the stack is full
int isFull(Stack* s) {
    return s->top == MAX - 1;
}

// Function to push an element onto the stack
void push(Stack* s, int value) {
    if (isFull(s)) {
        printf("Stack overflow!\n");
        return;
    }
    s->items[++(s->top)] = value;
}

// Function to pop an element from the stack
int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack underflow!\n");
        exit(1);
    }
    return s->items[(s->top)--];
}

// Function to peek at the top element of the stack
int peek(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        exit(1);
    }
    return s->items[s->top];
}
