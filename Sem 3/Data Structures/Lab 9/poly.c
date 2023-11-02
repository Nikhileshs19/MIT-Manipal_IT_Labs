#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int coeff;
    int pow;
    struct Node* next;
} Node;

void insert(Node** head_ref, int coeff, int pow) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->coeff = coeff;
    new_node->pow = pow;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void addPolynomials(Node* poly1, Node* poly2, Node** result) {
    while (poly1 && poly2) {
        if (poly1->pow > poly2->pow) {
            insert(result, poly1->coeff, poly1->pow);
            poly1 = poly1->next;
        }
        else if (poly1->pow < poly2->pow) {
            insert(result, poly2->coeff, poly2->pow);
            poly2 = poly2->next;
        }
        else {
            insert(result, poly1->coeff + poly2->coeff, poly1->pow);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
    while (poly1) {
        insert(result, poly1->coeff, poly1->pow);
        poly1 = poly1->next;
    }
    while (poly2) {
        insert(result, poly2->coeff, poly2->pow);
        poly2 = poly2->next;
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
    Node* poly1 = NULL;
    Node* poly2 = NULL;
    Node* result = NULL;

    printf("Polynomial 1:\n")
    insert(&poly1, 5, 0);
    insert(&poly1, 4, 1);
    insert(&poly1, 2, 2);

    insert(&poly2, -8, 0);
    insert(&poly2, -3, 1);

    printf("1st polynomial: ");
    display(poly1);
    printf("\n");

    printf("2nd polynomial: ");
    display(poly2);
    printf("\n");

    addPolynomials(poly1, poly2, &result);

    printf("Resultant polynomial: ");
    display(result);
    printf("\n");

    return 0;
}
