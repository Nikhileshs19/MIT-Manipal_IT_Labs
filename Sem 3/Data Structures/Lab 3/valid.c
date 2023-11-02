#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SIZE 100

struct Stack {
    int top;
    char a[MAX_SIZE];
};

void initialize(struct Stack *s) {
    s->top = -1;
}

bool isEmpty(struct Stack *s) {
    return s->top == -1;
}

bool isFull(struct Stack *s) {
    return s->top == MAX_SIZE - 1;
}

void push(struct Stack *s, char value) {
    if (isFull(s)) {
        printf("Stack Overflow\n");
        return;
    }
    s->a[++s->top] = value;
}

char pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        return '\0';
    }
    return s->a[s->top--];
}

char peek(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return '\0';
    }
    return s->a[s->top];
}

int isValid(struct Stack *s) {
    char string[100];
    printf("Enter string: ");
    fflush(stdin);
    gets(string);
    int len = strlen(string);

    for (int i = 0; i < len; i++) {
        if (string[i] == '(' || string[i] == '{' || string[i] == '[') {
            push(s, string[i]);
        }
        else if (!isEmpty(s)) {
            char topChar = peek(s);
            if ((string[i] == ')' && topChar == '(') ||
                (string[i] == '}' && topChar == '{') ||
                (string[i] == ']' && topChar == '[')) {
                pop(s);
            }
        }
        else {
            return 1;
        }
    }
    return isEmpty(s);
}

int main() {
    struct Stack stack;
    initialize(&stack);

    if (isValid(&stack)) {
        printf("The entered string has balanced brackets.\n");
    } else {
        printf("The entered string does not have balanced brackets.\n");
    }

    return 0;
}
