#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int data;
    struct Node * next;
}Node;

Node * createNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}

Node* insert_end(Node*head,int data){
    Node* newNode = createNode(data);
    if(head == NULL){
        head = newNode;
    }
    else{
        head->next = insert_end(head->next, data);
    }
    return head;
}

Node* traverse(Node* head)
{
    if (head == NULL)
       return;
    else{
    printf("%d ",head->data);
    traverse(head->next);
    }
    return head;
}

void main(){
    Node* head = NULL;
    head = insert_end(head, 15);
    head = insert_end(head, 19);
    head = insert_end(head, 3);
    head = insert_end(head, 7);
    head = traverse(head);
}
