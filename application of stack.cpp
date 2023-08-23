#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SIZE 100

// Structure to represent the stack
struct Stack {
    char data[MAX_SIZE];
    int top;
};

// Initialize an empty stack
void initializeStack(struct Stack* stack) {
    stack->top = -1;
}

// Check if the stack is empty
bool isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Check if the stack is full
bool isFull(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

// Push an element onto the stack
void push(struct Stack* stack, char value) {
    if (isFull(stack)) {
        printf("Stack is full. Cannot push.\n");
        return;
    }
    stack->data[++stack->top] = value;
}

// Pop an element from the stack
char pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Cannot pop.\n");
        return '\0';
    }
    return stack->data[stack->top--];
}

// Function to check if the given expression is balanced
bool isBalanced(char expression[]) {
    struct Stack stack;
    initializeStack(&stack);

    int length = strlen(expression);

    for (int i = 0; i < length; ++i) {
        char current = expression[i];
        if (current == '(' || current == '{' || current == '[') {
            push(&stack, current);
        } else if (current == ')' || current == '}' || current == ']') {
            if (isEmpty(&stack)) {
                return false;
            }

            char top = pop(&stack);

            if ((current == ')' && top != '(') ||
                (current == '}' && top != '{') ||
                (current == ']' && top != '[')) {
                return false;
            }
        }
    }

    return isEmpty(&stack);
}

int main() {
    char expression[MAX_SIZE];

    printf("Enter an expression: ");
    scanf("%s", expression);

    if (isBalanced(expression)) {
        printf("The expression is balanced.\n");
    } else {
        printf("The expression is not balanced.\n");
    }

    return 0;
}
