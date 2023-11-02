#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int item;
    struct node* next;
}node;

node* ins(node* start,int element){

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

void print(node* start){
    if(start==NULL){
        return;
    }
    printf("%d ",start->item);
    print(start->next);
}

node* merge(node* l1,node*l2){
    node* head;
    if(l1->item<l2->item){
        head = l1;
        l1 = l1->next;
    }else{
        head = l2;
        l2 = l2->next;
    }
    node* cur = head;
    while(l1!=NULL&&l2!=NULL){
        if(l1->item<l2->item){
        cur->next = l1;
        l1 = l1->next;
    }else{
        cur->next = l2;
        l2 = l2->next;
    }
    cur = cur->next;
    }

    if(l1!=NULL){
        cur->next = l1;
    }else if(l2!=NULL){
        cur->next = l2;
    }
    return head;
}

int main(){
    node* l1=NULL,*l2=NULL;

    l1 = ins(l1,1);
    ins(l1,1);
    ins(l1,2);
    ins(l1,2);
    ins(l1,3);
    ins(l1,3);
    ins(l1,3);
    ins(l1,4);
    ins(l1,5);
    ins(l1,5);
    ins(l1,6);

    l2 = ins(l2,2);
    ins(l2,2);
    ins(l2,2);
    ins(l2,3);
    ins(l2,4);
    ins(l2,5);
    ins(l2,5);
    ins(l2,6);
    ins(l2,7);

    printf("List 1: ");
    print(l1);

    printf("\nList 2: ");
    print(l2);

    printf("\n");
    node* l3 = merge(l1,l2);
    print(l3);
    return 0;

}
