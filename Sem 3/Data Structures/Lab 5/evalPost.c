#include<stdio.h>
#include<ctype.h>
#include <string.h>

int stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int prec(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}
int isOp(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}
int operate(int x, int y, char c){
    int result;
    switch(c){
        case '+': result = x+y; break;
        case '-': result = x-y; break;
        case '*': result = x*y; break;
        case '/': result = x/y; break;
        default: printf("Wrong operator");
    }
    return result;
}

int evaluate(char* expression) {
    int i = 0;
    char symbol = expression[i];
    int op1, op2, result;

    while (symbol != '\0') {
        if (symbol >= '0' && symbol <= '9') {
            int num = symbol - '0';
            push(num);
        }
        else if (isOp(symbol)) {
            op2 = pop();
            op1 = pop();
            result = operate(op1, op2, symbol);
            push(result);
        }
        i++;
        symbol = expression[i];
    }
    result = pop();
    return result;
}

int main() {
    char expression[] = "5 4 3 + 2 - *";
    int result = evaluate(expression);
    printf("Result= %d\n", result);
    return 0;
}
