#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

typedef struct Node Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* createBinaryTree() {
    int data;
    Node* root = NULL;

    printf("Enter data (or -1 to stop): ");
    scanf("%d", &data);

    if (data != -1) {
        root = createNode(data);
        printf("Enter the left child of %d:\n", data);
        root->left = createBinaryTree();
        printf("Enter the right child of %d:\n", data);
        root->right = createBinaryTree();
    }

    return root;
}

void printBinaryTree(Node* root) {
    if (root == NULL) {
        return;
    }

    printBinaryTree(root->left);
    printf("%d ", root->data);
    printBinaryTree(root->right);
}

int main() {
    Node* root = createBinaryTree();

    printf("Binary Tree (In-order Traversal): ");
    printBinaryTree(root);
    printf("\n");

    return 0;
}
