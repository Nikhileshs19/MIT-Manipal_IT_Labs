#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int item;
    struct node* next;
}node;

node* ins_beg(node* start,int element){
    node *temp =(node*)malloc(sizeof(node));
    temp->item = element;

    temp->next=start;
    start = temp;
    return start;
}
node* ins_end(node* start,int element){
    node *cur = start;
    node *temp =(node*)malloc(sizeof(node));
    temp->item = element;
    temp->next=NULL;

    if(start == NULL)
        return temp;

    while((cur->next)!=NULL)
        cur=cur->next;
    cur->next=temp;
    return start;
}

node* del_beg(node* start,int *de){
    if(start == NULL){
        printf("Link-List Empty\n");
        return NULL;
    }
    node *cur = start;
    start = start->next;
    *de = cur->item;
    free(cur);
    return start;
}


void print(node* start){
    if(start==NULL){
        printf("Link-List Empty\n");
        return;
    }
    while(start!=NULL){
        printf("%d ",start->item);
        start = start->next;
    }
    printf("\n");
}

typedef struct{
    node* top;
}stack;

void push(stack* s,int element){
    s->top=ins_beg(s->top,element);
}
int pop(stack* s){
    int de;
    if(s->top==NULL){
        printf("Stack Underflow\n");
        return -99999;
    }
    s->top = del_beg(s->top,&de);
    return de;
}

void displayStack(stack *s){
    if(s->top==NULL){
        printf("Stack Empty\n");
        return;
    }
    print(s->top);
}

typedef struct{
    node* top;
}queue;

void enQueue(queue* s,int element){
    s->top=ins_end(s->top,element);
}
int deQueue(queue* s){
    int de;
    if(s->top==NULL){
        printf("Queue Underflow\n");
        return -99999;
    }
    s->top = del_beg(s->top,&de);
    return de;
}

void displayQueue(queue *s){
    if(s->top==NULL){
        printf("Queue Empty\n");
        return;
    }
    print(s->top);
}

int main(){
    stack s;
    queue q;
    q.top= NULL;
    s.top = NULL;
    push(&s,1);
    push(&s,2);
    push(&s,3);
    displayStack(&s);
    printf("popped element = %d\n",pop(&s));
    printf("popped element = %d\n",pop(&s));
    displayStack(&s);
    printf("popped element = %d\n",pop(&s));
    displayStack(&s);
    //printf("popped element = %d\n",pop(&s));
    enQueue(&q,1);
    enQueue(&q,2);
    enQueue(&q,3);
    displayQueue(&q);
    printf("deQueued element = %d\n",deQueue(&q));
    printf("deQueued element = %d\n",deQueue(&q));
}
