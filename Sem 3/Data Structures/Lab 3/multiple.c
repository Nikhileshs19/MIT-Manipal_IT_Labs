#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SIZE 100
#define NUM_STACKS 3

struct MultiStack {
    int numStacks;
    int top[MAX_SIZE];
    int data[MAX_SIZE];
};

void initialize(struct MultiStack *ms, int numStacks) {
    ms->numStacks = numStacks;
    for (int i = 0; i < numStacks; i++) {
        ms->top[i] = i * (MAX_SIZE / numStacks) - 1;
    }
}

bool isEmpty(struct MultiStack *ms, int stackNum) {
    return ms->top[stackNum] == (stackNum * (MAX_SIZE / ms->numStacks)) - 1;
}

bool isFull(struct MultiStack *ms, int stackNum) {
    return ms->top[stackNum] == ((stackNum + 1) * (MAX_SIZE / ms->numStacks)) - 1;
}

void push(struct MultiStack *ms, int stackNum, int value) {
    if (isFull(ms, stackNum)) {
        printf("Stack Overflow in %d.\n", stackNum);
        return;
    }
    ms->data[++ms->top[stackNum]] = value;
}

int pop(struct MultiStack *ms, int stackNum) {
    if (isEmpty(ms, stackNum)) {
        printf("Stack Underflow in %d.\n", stackNum);
        return -1;
    }
    return ms->data[ms->top[stackNum]--];
}

void show(struct MultiStack *ms, int stackNum) {
    if (isEmpty(ms, stackNum)) {
        printf("Stack %d: No elements in stack\n", stackNum);
        return;
    }
    printf("Stack %d: Elements in stack are:\n", stackNum);
    for (int i = ms->top[stackNum]; i >= stackNum * (MAX_SIZE / ms->numStacks); i--) {
        printf("%d\n", ms->data[i]);
    }
}

int peek(struct MultiStack *ms, int stackNum) {
    if (isEmpty(ms, stackNum)) {
        printf("Stack %d is empty, cannot peek.\n", stackNum);
        return -1;
    }
    return ms->data[ms->top[stackNum]];
}

int main(){
    int numStacks;
    printf("Enter the number of stacks: ");
    scanf("%d", &numStacks);
    int choice1,choice2;
    if (numStacks <= 0) {
        printf("Number of stacks must be greater than 0.\n");
        return 0;
    }

    struct MultiStack multiStack;
    initialize(&multiStack, numStacks);
    int choice;
    while (1) {
        printf("\nPerform operations on the stacks:\n");
        printf("1. Push\n2. Pop\n3. Show\n4. End\n\nEnter the choice: ");
        scanf("%d", &choice);

        int stackNum, value;
        switch (choice) {
            case 1:
                printf("Enter the stack number (0 to %d): ", numStacks - 1);
                scanf("%d", &stackNum);
                if (stackNum >= 0 && stackNum < numStacks) {
                    printf("Enter the value to push: ");
                    scanf("%d", &value);
                    push(&multiStack, stackNum, value);
                } else {
                    printf("Invalid stack number.\n");
                }
                break;
            case 2:
                printf("Enter the stack number (0 to %d): ", numStacks - 1);
                scanf("%d", &stackNum);
                if (stackNum >= 0 && stackNum < numStacks) {
                    pop(&multiStack, stackNum);
                } else {
                    printf("Invalid stack number.\n");
                }
                break;
            case 3:
                printf("Enter the stack number (0 to %d): ", numStacks - 1);
                scanf("%d", &stackNum);
                if (stackNum >= 0 && stackNum < numStacks) {
                    show(&multiStack, stackNum);
                } else {
                    printf("Invalid stack number.\n");
                }
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
    /*push(&multiStack, 0, 5);
    push(&multiStack, 1, 10);
    push(&multiStack, 2, 15);

    printf("Peek stack 0: %d\n", peek(&multiStack, 0));
    printf("Peek stack 1: %d\n", peek(&multiStack, 1));
    printf("Peek stack 2: %d\n", peek(&multiStack, 2));

    printf("Pop stack 0: %d\n", pop(&multiStack, 0));
    printf("Pop stack 1: %d\n", pop(&multiStack, 1));
    printf("Pop stack 2: %d\n", pop(&multiStack, 2));*/

}
