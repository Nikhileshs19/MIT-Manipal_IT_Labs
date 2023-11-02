#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int coeff;
    int pow;
    struct Node* next;
    struct Node* prev;
} Node;

void insert(Node** head_ref, int coeff, int pow) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->coeff = coeff;
    new_node->pow = pow;
    new_node->next = (*head_ref);
    new_node->prev = (*head_ref)->prev;
    (*head_ref)->prev->next = new_node;
    (*head_ref)->prev = new_node;
}

void multiplyPolynomials(Node* poly1, Node* poly2, Node** result) {
    Node* temp1 = poly1->next;
    while (temp1 != poly1) {
        Node* temp2 = poly2->next;
        while (temp2 != poly2) {
            int coeff = temp1->coeff * temp2->coeff;
            int pow = temp1->pow + temp2->pow;
            insert(result, coeff, pow);
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
}

void display(Node* node) {
    while (node != NULL) {
        printf("%dx^%d", node->coeff, node->pow);
        node = node->next;
        if (node != NULL) {
            printf(" + ");
        }
    }
}

int main() {
    Node* poly1 = (Node*)malloc(sizeof(Node));
    poly1->coeff = 0;
    poly1->pow = 0;
    poly1->next = poly1;
    poly1->prev = poly1;

    Node* poly2 = (Node*)malloc(sizeof(Node));
    poly2->coeff = 0;
    poly2->pow = 0;
    poly2->next = poly2;
    poly2->prev = poly2;

    Node* result = (Node*)malloc(sizeof(Node));
    result->coeff = 0;
    result->pow = 0;
    result->next = result;
    result->prev = result;

    insert(&poly1, 5, 2);
    insert(&poly1, 4, 1);
    insert(&poly1, 2, 0);

    insert(&poly2, -5, 1);
    insert(&poly2, -5, 0);

    printf("1st polynomial: ");
    display(poly1->next);
    printf("\n");

    printf("2nd polynomial: ");
    display(poly2->next);
    printf("\n");

    multiplyPolynomials(poly1, poly2, &result);

    printf("Resultant polynomial: ");
    display(result->next);
    printf("\n");

    return 0;
}

