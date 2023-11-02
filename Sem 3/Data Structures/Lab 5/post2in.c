#include<stdio.h>
#include<ctype.h>
#include <string.h>

char stack[100][100],a[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char* pop()
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

void convert(char exp[]){
    int l, i, j=0;
    char op1, op2;
    char a, b, op, tmp[20];
    l=strlen(exp);
    for(i=0;i<50;i++)
        stack[i]='\0';
    printf("The Infix expression is : ");
    for(i=0;i<l;i++){
        if(exp[i]=='+' || exp[i]=='*' || exp[i]=='-' || exp[i]=='/'){
            op2 = pop();
            push(exp[i]);
        }
        else{
            tmp[j++]=exp[i];
            tmp[j++]=pop();
        }
    }
    tmp[j]=exp[top--];
    strrev(tmp);
    puts(tmp);
}

int main() {
    char expression[] = "abc+d-*";
    convert(expression);
    /*int i = 0;
    char symbol = expression[i];
    char op1[100], op2[100], result[100];

    while (symbol != '\0') {
        if ((symbol >= 'a' && symbol <= 'z')||(symbol >= 'A' && symbol <= 'Z'))
            push(symbol);
        else if (isOp(symbol)) {
            strcpy(op2, pop());
            strcpy(op1, pop());
            strcpy(result,"(");
            strcat(result, op1);
            strcat(result, symbol);
            strcat(result, op2);
            strcat(result, ")");
            push(result);
        }
        i++;
        symbol = expression[i];
    }
    //strcpy(result, pop());
    printf("%s", pop());*/
    return 0;
}

