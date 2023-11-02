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

int getCount(Node* head)
{
    int count = 0; // Initialize count
    struct Node* current = head; // Initialize current
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

Node* insert_beg(Node* head, int data){
    Node* newNode = createNode(data);
    if(head == NULL)
        head = newNode;
    else{
        newNode->next = head;
        head = newNode;
    }
    return head;
}

Node* insert_end(Node*head,int data){
    Node* newNode = createNode(data);
    if(head == NULL){
        head = newNode;
    }
    else{
        Node* current = head;
        while(current->next!=NULL)
            current = current->next;
        current->next = newNode;
    }
    return head;
}

Node* insert_bef(Node* head, int before, int data){
    Node* newNode = createNode(data);
    Node* cur = head;
    while(cur->next->data != before)
        cur = cur->next;
    newNode->next = cur->next;
    cur->next = newNode;
    return head;
}

Node* insert_aft(Node* head, int after, int data){
    Node* newNode = createNode(data);
    Node* cur = head;
    while(cur->data != after)
        cur = cur->next;
    newNode->next = cur->next;
    cur->next = newNode;
    return head;
}

Node* deleteNode(Node* head, int data){
    if(head == NULL){
        printf("Linked list is empty.\n");
        return NULL;
    }
    Node* current = head;
    Node* prev = NULL;
    while(current!=NULL && current->data != data){
        prev = current;
        current = current->next;
    }
    if(current == NULL){
        printf("Element not found in the linked list.\n");
        return head;
    }
    if(prev == NULL){
        head = current->next;
    }
    else{
        prev->next = current->next;
    }
    free(current);
    printf("Element deleted successfully.\n");
    return head;
}

Node* delete_beg(Node* head){
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node* delete_end(Node* head){
    Node* cur = head;
    while((cur->next)->next!=NULL){
        cur = cur->next;
    }
    Node* temp = cur->next;
    cur->next = NULL;
    free(temp);
    return head;
}

Node* reverse(Node* head){
    Node* prev = NULL;
    Node* current = head;
    Node* next1 = NULL;
    while(current!=NULL){
        next1 = current->next;
        current->next = prev;
        prev = current;
        current = next1;
    }
    head = prev;
    return head;
}

Node* swap(Node* ptr1, Node* ptr2)
{
    Node* tmp = ptr2->next;
    ptr2->next = ptr1;
    ptr1->next = tmp;
    return ptr2;
}

Node* sort(Node* head, int n){
    Node* h;
    int i,j,swapped;
    for (i = 0; i <= n; i++) {
        h = head;
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            Node* p1 = h;
            Node* p2 = p1->next;

            if (p1->data > p2->data) {
                h = swap(p1, p2);
                swapped = 1;
            }
            h = h->next;
            }
        if (swapped == 0)
            break;
    }
    return head;
}

Node* deleteAlt(Node* head){
    if(head == NULL)
        return NULL;
    Node* prev = head;
    Node* node = head->next;
    while(prev!=NULL && node!=NULL){
        prev->next = node->next;
        free(node);
        prev = prev->next;
        if(prev!=NULL)
            node = prev->next;
    }
}

void display(Node* head){
    if(head == NULL){
        printf("Linked list is empty.\n");
        return;
    }
    Node* current = head;
    printf("Linked list elements: ");
    while(current!=NULL){
        printf("%d ",current->data);
        current = current->next;
    }
    printf("\n");
}
void main(){
    Node * head = NULL;
    int choice, data, after, before;

    while(choice != 13){
        printf("\n----------------------\n");
        printf("Linked Lists\n");
        printf("-------------------------\n");
        printf("1. Insert an element in the beginning\n");//
        printf("2. Insert an element in the end\n");//
        printf("3. Insert an element before another element\n");//
        printf("4. Insert an element after another element\n");//
        printf("5. Delete a specific element from the list\n");//
        printf("6. Delete an element from the beginning\n");//
        printf("7. Delete an element from the end\n");//
        printf("8. Traverse the list\n");//??
        printf("9. Reverse the list\n");//idk y
        printf("10. Sort the list\n");//not yet
        printf("11. Delete alternate nodes in the list\n");//
        printf("12. Insert into a sorted list\n");
        printf("13. Exit\n");//
        printf("Enter your choice: ");
        scanf("%d", &choice);
        int n;
        switch(choice){
            case 1:
                printf("Enter element to insert: ");
                scanf("%d",&data);
                head = insert_beg(head,data);
                break;
            case 2:
                printf("Enter the element to insert: ");
                scanf("%d", &data);
                head = insert_end(head,data);
                break;
            case 3:
                printf("Enter element before which to insert, and the element to insert: ");
                scanf("%d%d", &before, &data);
                head = insert_bef(head, before, data);
                break;
            case 4:
                printf("Enter element after which to insert, and the element to insert: ");
                scanf("%d%d", &after ,&data);
                head = insert_aft(head, after, data);
                break;
            case 5:
                printf("Enter the element to delete:");
                scanf("%d",&data);
                head = deleteNode(head,data);
                break;
            case 6:
                head = delete_beg(head);
                break;
            case 7:
                head = delete_end(head);
                break;
            case 8:
                display(head);
                break;
            case 14:
                printf("Exiting the program.\n");
                return;
            case 9:
                head = reverse(head);
                break;
            case 10:
                n = getCount(head);
                head = sort(head,n);
                break;
            case 11:
                deleteAlt(head);
                break;
            default:
                printf("Invalid choice, select number from 1-4.\n");
        }
    }
}
