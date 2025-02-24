#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Maximum size of the stack

// Stack structure
struct Stack {
    int arr[MAX];
    int top;
};

// Function to initialize the stack
void initStack(struct Stack* stack) {
    stack->top = -1;
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == MAX - 1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to push an element onto the stack
void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow!\n");
    } else {
        stack->arr[++stack->top] = value;
        printf("Pushed %d onto the stack\n", value);
    }
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow!\n");
        return -1;  // Return -1 if the stack is empty
    } else {
        return stack->arr[stack->top--];
    }
}

// Function to peek the top element of the stack
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    } else {
        return stack->arr[stack->top];
    }
}

// Main function
int main() {
    struct Stack stack;
    initStack(&stack);  // Initialize the stack

    push(&stack, 10);    // Push elements onto the stack
    push(&stack, 20);
    push(&stack, 30);
    push(&stack, 40);
    push(&stack, 50);

    // Trying to push onto a full stack
    push(&stack, 60);

    // Pop elements from the stack
    printf("Popped: %d\n", pop(&stack));
    printf("Popped: %d\n", pop(&stack));

    // Peek the top element
    printf("Top element is: %d\n", peek(&stack));

    return 0;
}
