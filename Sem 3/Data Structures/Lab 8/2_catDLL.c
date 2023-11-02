#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node * next;
    struct Node * prev;
}Node;

Node * createNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode -> data = data;
    newNode -> next = NULL;
    newNode -> prev = NULL;
    return newNode;
}

Node* ins_end(Node* head, int data){
    Node* newNode = createNode(data);
    if(head == NULL){
        head = newNode;
        return head;
    }
    Node* cur = head;
    while(cur->next != NULL)
        cur = cur->next;
    cur->next = newNode;
    newNode->prev = cur;
    return head;
}

Node* concat(Node* head1, Node* head2){
    Node* cur = head1;
    while(cur->next!=NULL)
        cur = cur->next;
    cur->next = head2;
    head2->prev = cur;
    return head1;
}

void traverse(Node* head){
    while(head!=NULL){
        printf("%d ", head->data);
        head = head->next;
    }
}

void main(){
    Node* head1 = NULL;
    Node* head2 = NULL;
    head1 = ins_end(head1, 1);
    head1 = ins_end(head1, 2);
    head1 = ins_end(head1, 3);
    head1 = ins_end(head1, 4);
    head2 = ins_end(head2, 5);
    head2 = ins_end(head2, 6);
    head2 = ins_end(head2, 7);
    head2 = ins_end(head2, 8);
    head1 = concat(head1, head2);
    traverse(head1);
}
