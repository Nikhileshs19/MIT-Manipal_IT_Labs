#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

char stack[MAX][MAX];
int top = -1;

int isFull(){
    if(top == MAX-1)
        return 1;
    else
        return 0;
}

int isEmpty(){
    if(top == -1)
        return 1;
    else
        return 0;
}

// Push
void push(char *item){
    if (isFull())
        printf("Stack Overflow\n");
    else
    {
        top++;
        strcpy(stack[top], item);
    }
}

// Pop
char *pop(){
    if (isEmpty()){
        printf("Stack underflow\n");
        exit(0);
    }
    return stack[top--];
}

int isOperator(char symbol){
    return (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || symbol == '^');
}

int isOperand(char symbol){
    return (symbol >= 'A' && symbol <= 'Z' || symbol >= 'a' && symbol <= 'z');
}

int main()
{
    char prefix[MAX], temp[2], op[2] = {'(', '\0'}, cl[2] = {')', '\0'};
    int i, j = 0;
    printf("Enter an prefix expression: ");
    gets(prefix);
    i = strlen(prefix) - 1;

    while (i >= 0)
    {
        char exp[MAX] = {'\0'}, op1[MAX] = {'\0'}, op2[MAX] = {'\0'};
        temp[0] = prefix[i];
        temp[1] = '\0';
        if (isOperand(temp[0]))
            push(temp);
        else if (isOperator(temp[0]))
        {   //to push in the form (operand1 operator operand2)
            strcpy(op1, pop());
            strcpy(op2, pop());
            strcat(exp, op);
            strcat(exp, op1);
            strcat(exp, temp);
            strcat(exp, op2);
            strcat(exp, cl);
            push(exp);
        }
        else
        {
            printf("Invalid Arithmetic expression!\n");
            return 0;
        }
        i--;
    }
    printf("The infix expression is: ");
    puts(stack[0]);
    return 0;
}
// Enter an prefix expression: +a*bc
// The infix expression is: (a+(b*c))
