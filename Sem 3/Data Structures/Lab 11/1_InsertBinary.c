#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* right;
    struct Node* left;
};

typedef struct Node Node;

Node* createNode(int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* insertBST(Node* root,int data)
{
    if(root == NULL)
    {
        return createNode(data);
    }
    if(data < root -> data)
    {
        root -> left = insertBST(root -> left,data);
    }
    else if(data > root -> data)
    {
        root -> right = insertBST(root -> right,data);
    }
    return root;
}

void printBinaryTree(Node* root)
{
    if(root == NULL) {
        return;
    }
    printBinaryTree(root -> left);
    printf("%d ", root -> data);
    printBinaryTree(root -> right);
}

int main() {
    Node* root = NULL;
    int data, choice;

    do {
        printf("----------------------------------------------------\n");
        printf("Menu:\n");
        printf("----------------------------------------------------\n");
        printf("1. Insert an element into the binary search tree\n");
        printf("2. Print the binary search tree (In-order Traversal)\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("----------------------------------------------------\n");

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &data);
                root = insertBST(root, data);
                break;

            case 2:
                printf("Binary Search Tree (In-order Traversal): ");
                printBinaryTree(root);
                printf("\n");
                break;

            case 3:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}


