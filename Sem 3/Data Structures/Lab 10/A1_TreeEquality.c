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

int areEqualTrees(Node* tree1, Node* tree2) {
    if (tree1 == NULL && tree2 == NULL) {
        return 1;
    }

    if (tree1 != NULL && tree2 != NULL) {
        return (tree1->data == tree2->data) &&
               areEqualTrees(tree1->left, tree2->left) &&
               areEqualTrees(tree1->right, tree2->right);
    }

    return 0;
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

int main() {
    printf("Enter the first binary tree:\n");
    Node* tree1 = createBinaryTree();

    printf("Enter the second binary tree:\n");
    Node* tree2 = createBinaryTree();

    if (areEqualTrees(tree1, tree2)) {
        printf("The two trees are equal.\n");
    } else {
        printf("The two trees are not equal.\n");
    }

    return 0;
}
