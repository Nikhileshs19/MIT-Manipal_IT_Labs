#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int item;
    struct node *next;
    struct node *prev;
}node;

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


node* ins_end(node* start,int element){

    node *cur = start;
    node *temp =(node*)malloc(sizeof(node));
    temp->item = element;
    temp->next=NULL;
    temp->prev=NULL;

    if(start == NULL)
        return temp;

    while((cur->next)!=NULL)
        cur=cur->next;
    cur->next=temp;
    temp->prev=cur;
    return start;
}

int isPresent(node* start,int element){

    if(start==NULL)
        return 0;

    while(start!=NULL){
        if(start->item==element)
            return 1;
        start=start->next;
    }

    return 0;
}

node* union_DDL(node* X1,node* X2){

    node* cur = X1;
    node* ans=NULL;

    while(cur!=NULL){
        ans = ins_end(ans,cur->item);
        cur=cur->next;
    }


    node* adder = X2;

    while(adder != NULL){
        if(isPresent(X1,adder->item)){
            adder=adder->next;
            continue;
        }

        ans = ins_end(ans,adder->item);
        adder=adder->next;
    }
    return ans;

}

node* intersection_DLL(node* X1,node* X2){
    node* cur = X1;
    node* ans=NULL;

    while(cur!=NULL){
        if(!isPresent(X2,cur->item)){
            cur=cur->next;
            continue;
        }
        ans = ins_end(ans,cur->item);
        cur=cur->next;
    }
    return ans;


}

int main(){
    int controller;
    node *X1 = NULL;
    node *X2 = NULL;

    X1=ins_end(X1,5);
    ins_end(X1,2);
    ins_end(X1,4);
    ins_end(X1,1);
    ins_end(X1,3);

    X2=ins_end(X2,3);
    ins_end(X2,4);
    ins_end(X2,5);
    ins_end(X2,6);
    ins_end(X2,7);
    node* unionDDL = union_DDL(X1,X2);
    print(unionDDL);
    node* intersectionDLL = intersection_DLL(X1,X2);
    print(intersectionDLL);

}


