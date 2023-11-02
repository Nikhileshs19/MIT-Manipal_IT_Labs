#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int info;
    struct node* next;
    struct node* prev;
}node;

node* createNode(int data){
    node* newNode = (node*)malloc(sizeof(node));
    newNode -> info = data;
    newNode -> next = NULL;
    newNode -> prev = NULL;
    return newNode;
}

node* ins_end(node* head, int data){
    node* new_node = createNode(data);
    if (head == NULL) {
        new_node->next = new_node->prev = new_node;
        head = new_node;
        return head;
    }
    node* last = head->prev;
    new_node->next = head;
    head->prev = new_node;
    new_node->prev = last;
    last->next = new_node;
    return head;
}

node* ins_beg(node* head, int data){
    node* new_node = createNode(data);
    if (head == NULL) {
        new_node->next = new_node->prev = new_node;
        head = new_node;
        return head;
    }
    (head->prev)->next = new_node;
    new_node->prev = head->prev;
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
    return head;
}

node* del_beg(node* head){
    if(head == NULL){
        printf("List is empty\n");
        return head;
    }
    (head->prev)->next = head->next;
    node* nxt = head->next;
    nxt->prev = head->prev;
    free(head);
    return nxt;
}

node* del_end(node* head){
    if(head == NULL){
        printf("List is empty\n");
        return head;
    }
    node* last = head->prev;
    (last->prev)->next = head;
    head->prev = last->prev;
    free(last);
    return head;
}

void traverse(node* head){
    node* temp = head;
    while (1) {
      printf("%d ",temp->info);
      temp = temp->next;
      if(temp == head)
        break;
    }
    printf("\n");
}

void main(){
    node* head = NULL;
    int choice, data;

    while(choice!=6){
        printf("\n----------------------\n");
        printf("Doubly Linked Circular Lists\n");
        printf("-------------------------\n");
        printf("1. Insert at the beginning.\n2. Insert at the end.\n3. Delete from the beginning.\n4. Delete from the end.\n5. Traverse the list.\n6.Exit.\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter element to insert\n");
                scanf("%d",&data);
                head = ins_beg(head,data);
                break;
            case 2:
                printf("Enter element to insert\n");
                scanf("%d",&data);
                head = ins_end(head, data);
                break;
            case 3:
                head = del_beg(head);
                break;
            case 4:
                head = del_end(head);
                break;
            case 5:
                traverse(head);
                break;
            case 6:
                break;
            default:
                printf("Enter value from 1-6\n");
        }
    }
}
