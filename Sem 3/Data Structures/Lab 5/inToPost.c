#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct{
    int top;
    char a[MAX_SIZE];
}Stack;

int isEmpty(Stack s)
{
    return s.top == -1;
}
int isFull(Stack s)
{
    return s.top == MAX_SIZE - 1;
}

char peek(Stack s)
{
    return s.a[s.top];
}

char pop(Stack s)
{
    if(isEmpty(s))
        return -1;

    char ch = s.a[s.top];
    s.top--;
    return(ch);
}

void push(Stack s, char oper)
{
    if(isFull(s))
        printf("Stack Full!!!!");

    else{
        s.top++;
        s.a[s.top] = oper;
    }
}
int precedence(char operator)
{
    switch (operator) {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default:
        return -1;
    }
}

int isOp(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

/*char* infixToPostfix(char* infix)
{
    int i, j;
    int len = strlen(infix);
    char* postfix [len+2];
    Stack stack;
    stack.top = -1;

    for (i = 0, j = 0; i < len; i++) {
        if (infix[i] == ' ' || infix[i] == '\t')
            continue;

        if (infix[i]>=65 && infix[i]<=122) {
            postfix[j++] = infix[i];
        }

        else if (infix[i] == '(') {
            stack.a[++stack.top] = infix[i];
        }

        else if (infix[i] == ')') {
            while (stack.top > -1 && stack.a[stack.top] != '(')
                postfix[j++] = stack.a[stack.top--];
            if (stack.top > -1 && stack.a[stack.top] != '(')
                return "Invalid Expression";
            else
                stack.top--;
        }
        else if (isOp(infix[i])) {
            while (stack.top > -1
                   && precedence(stack.a[stack.top])
                          >= precedence(infix[i]))
                postfix[j++] = stack.a[stack.top--];
            stack.a[++stack.top] = infix[i];
        }
    }

    while (stack.top > -1) {
        if (stack.a[stack.top] == '(') {
            return "Invalid Expression";
        }
        postfix[j++] = stack.a[stack.top--];
    }
    postfix[j] = '\0';
    return postfix;
}*/

int covertInfixToPostfix(char* expression)
{
    int i, j;
    Stack s;
    s.top = -1;
    for (i = 0, j = -1; expression[i]; ++i)
    {
       if (isOp(expression[i]))
            expression[++j] = expression[i];

        else if (expression[i] == '(')
            push(s,expression[i]);

        else if (expression[i] == ')')
        {
            while (!isEmpty(s) && peek(s) != '(')
                expression[++j] = pop(s);
            if (!isEmpty(s) && peek(s) != '(')
                return -1;
            else
                pop(s);
        }
        else
        {
            while (!isEmpty(s) && precedence(expression[i]) <= precedence(peek(s)))
                expression[++j] = pop(s);
            push(s, expression[i]);
        }

    }

    while (!isEmpty(s))
        expression[++j] = pop(s);

    expression[++j] = '\0';
    printf( "%s", expression);
}

int main()
{
char expression[] = "((x+(y*z))-w)";
    covertInfixToPostfix(expression);
    return 0;
}

