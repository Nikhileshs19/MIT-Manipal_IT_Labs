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

Node* ins_beg(Node* head, int data){
    Node* newNode = createNode(data);
    if(head == NULL){
        head = newNode;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return head;
}

Node* del_end(Node* head){
    Node* cur = head;
    while((cur->next)->next!=NULL)
        cur = cur->next;
    Node*temp = cur->next;
    cur->next = NULL;
    free(temp);
    return head;
}

Node* ins_pos(Node* head, int pos, int data){
    Node* newNode = createNode(data);   //REMEMBER TO KEEP COUNT VAR IN MAIN TO CHECK
    Node* cur = head;
    for(int i=1; i<pos-1; i++){
        cur = cur->next;
    }
    (cur->next)->prev = newNode;
    newNode->next = cur->next;
    cur->next = newNode;
    newNode->prev = cur;
    return head;
}

Node* del_pos(Node* head, int pos){
    Node* cur = head;
    for(int i=0;i<pos-1;i++){
        cur = cur->next;
    }
    (cur->prev)->next = cur->next;
    (cur->next)->prev = cur->prev;
    free(cur);
    return head;
}

Node* ins_bef(Node* head, int before, int data){
    Node* cur = head;
    Node* newNode = createNode(data);
    while(cur->data != before)
        cur = cur->next;
    newNode->next = cur;
    newNode->prev = cur->prev;
    (cur->prev)->next = newNode;
    cur->prev = newNode;
    return head;
}

Node* ins_aft(Node* head, int after, int data){
    Node* cur = head;
    Node* newNode = createNode(data);
    while(cur->data != after)
        cur = cur->next;
    newNode->next = cur->next;
    newNode->prev = cur;
    (cur->next)->prev = newNode;
    cur->next = newNode;
    return head;
}

void traverse(Node* head){
    while(head!=NULL){
        printf("%d ", head->data);
        head = head->next;
    }
}

Node* reverse(struct Node* head)
{
    Node* temp = NULL;
    Node* cur = head;
    while (cur != NULL) {
        temp = cur->prev;
        cur->prev = cur->next;
        cur->next = temp;
        cur = cur->prev;
    }
    if (temp != NULL)
        head = temp->prev;
    return head;
}

void main(){
    Node *head = NULL;
    int choice, data, after, before, pos, count=0;

    while(choice != 9){
        printf("\n----------------------\n");
        printf("Linked Lists\n");
        printf("-------------------------\n");
        printf("1. Insert an element at the end\n");//
        printf("2. Delete an element from the end\n");//
        printf("3. Insert an element at a given position\n");//
        printf("4. Delete an element from a given position\n");//
        printf("5. Insert an element after another element\n");//
        printf("6. Insert an element before another element\n");//
        printf("7. Traverse the list\n");//
        printf("8. Reverse the list\n");//
        printf("9. Exit\n");//
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter element to insert\n");
                scanf("%d", &data);
                head = ins_end(head, data);
                count++;
                break;
            case 2:
                head = del_end(head);
                break;
            case 3:
                printf("Enter position and element to insert\n");
                scanf("%d%d",&pos,&data);
                if(pos > count){
                    printf("Position is greater than number of elements in list\n");
                    break;
                }
                head = ins_pos(head, pos, data);
                count++;
                break;
            case 4:
                printf("Enter position to delete\n");
                scanf("%d",&pos);
                if(pos > count){
                    printf("Position is greater than number of elements in list\n");
                    break;
                }
                head = del_pos(head, pos);
                break;
            case 5:
                printf("Enter element after which to insert, and the element to insert\n");
                scanf("%d%d",&after,&data);
                head = ins_aft(head, after, data);
                count++;
                break;
            case 6:
                printf("Enter element before which to insert, and the element to insert\n");
                scanf("%d%d",&before,&data);
                head = ins_bef(head, before, data);
                count++;
                break;
            case 7:
                traverse(head);
                break;
            case 8:
                head = reverse(head);
                break;
            default:
                printf("Enter valid number 1-9\n");
                break;
        }
    }
}
