#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE 100

struct Stack {
    int top;
    char a[MAX_SIZE];
};

void push(struct Stack *s, char c) {
    if (isFull(s)) {
        printf("\nStack Overflow");
        return;
    }
    s->top++;
    s->a[s->top] = c;
}

char pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("\nNo elements in stack");
        return;
    }
    char c = s->a[s->top];
    s->top--;
    return c;
}

int isEmpty(struct Stack *stack){
        return stack->top == -1;
    }
int isFull(struct Stack *stack){
    return stack->top == MAX_SIZE-1;
}

void main() {
    struct Stack stack;
    stack.top = -1;

    char input[MAX_SIZE];
    printf("Enter a word: ");
    scanf("%s", input);

    size_t length = strlen(input);

    for (size_t i = 0; i < length; i++) {
        push(&stack, input[i]);
    }

    char reversed[MAX_SIZE];
    for (size_t i = 0; i < length; i++) {
        reversed[i] = pop(&stack);
    }
    reversed[length] = '\0';

    if (strcmp(input, reversed) == 0) {
        printf("The given word is a palindrome.\n");
    } else {
        printf("The given word is not a palindrome.\n");
    }
}


