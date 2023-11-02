#include <stdio.h>
#define MAX_SIZE 100

struct Stack {
    int top;
    int a[MAX_SIZE];
};

void initialize(struct Stack *s) {
    s->top = -1;
}

int isEmpty(struct Stack *s) {
    return s->top == -1;
}

int isFull(struct Stack *s) {
    return s->top == MAX_SIZE - 1;
}

void push(struct Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow\n");
        return;
    }
    s->a[++s->top] = value;
}

int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->a[s->top--];
}

void show(struct Stack *s) {
    if (isEmpty(s)) {
        printf("\nNo elements in stack");
        return;
    }
    printf("Elements in stack are:\n");
    for (int i = s->top; i >= 0; i--) {
        printf("%c\n", s->a[i]);
    }
}

void decimalToBase(int decimal, int base) {
    struct Stack stack;
    initialize(&stack);

    while (decimal > 0) {
        int remainder = decimal % base;
        push(&stack, remainder);
        decimal /= base;
    }

    printf("Equivalent number in base %d is: ", base);
    while (!isEmpty(&stack)) {
        int digit = pop(&stack);
        printf("%d", digit);
    }
    printf("\n");
}

void decimalToHexadecimal(int decimal) {
    struct Stack stack;
    initialize(&stack);

    while (decimal > 0) {
        int remainder = decimal % 16;
        push(&stack, remainder);
        decimal /= 16;
    }

    printf("Equivalent hexadecimal number is: ");
    while (!isEmpty(&stack)) {
        int digit = pop(&stack);
        if (digit < 10) {
            printf("%d", digit);
        } else {
            printf("%c", 'A' + digit - 10);
        }
    }
    printf("\n");
}
int main() {
    int decimalNumber, base;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    printf("Enter the base to convert to: ");
    scanf("%d", &base);

    if(base == 16){
        decimalToHexadecimal(decimalNumber);
    }
    else
        decimalToBase(decimalNumber, base);

    return 0;
}
