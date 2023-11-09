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

void inOrderIterative(Node* root) {
    Node* stack[100];
    int top = -1;
    Node* current = root;

    while (current != NULL || top >= 0) {
        while (current != NULL) {
            stack[++top] = current;
            current = current->left;
        }

        current = stack[top--];
        printf("%d ", current->data);

        current = current->right;
    }
}

void postOrderIterative(Node* root) {
    if (root == NULL)
        return;

    Node* stack1[100];
    Node* stack2[100];
    int top1 = -1, top2 = -1;

    stack1[++top1] = root;
    Node* node;

    while (top1 >= 0) {
        node = stack1[top1--];
        stack2[++top2] = node;

        if (node->left != NULL)
            stack1[++top1] = node->left;
        if (node->right != NULL)
            stack1[++top1] = node->right;
    }

    while (top2 >= 0) {
        node = stack2[top2--];
        printf("%d ", node->data);
    }
}

void preOrderIterative(Node* root) {
    Node* stack[100];
    int top = -1;
    stack[++top] = root;

    while (top >= 0) {
        Node* node = stack[top--];
        printf("%d ", node->data);

        if (node->right != NULL)
            stack[++top] = node->right;
        if (node->left != NULL)
            stack[++top] = node->left;
    }
}

void printParent(Node* root, int target) {
    if (root == NULL) {
        printf("Element not found.\n");
        return;
    }

    Node* parent = NULL;
    Node* current = root;

    while (current != NULL) {
        if (current->data == target) {
            if (parent != NULL) {
                printf("Parent of %d is %d\n", target, parent->data);
                return;
            } else {
                printf("%d is the root node, it has no parent.\n", target);
                return;
            }
        }

        parent = current;

        if (target < current->data)
            current = current->left;
        else
            current = current->right;
    }

    printf("Element not found.\n");
}

int calculateDepth(Node* root) {
    if (root == NULL)
        return 0;

    int leftDepth = calculateDepth(root->left);
    int rightDepth = calculateDepth(root->right);

    return 1 + (leftDepth > rightDepth ? leftDepth : rightDepth);
}

int printAncestors(Node* root, int target) {
    if (root == NULL)
        return 0;

    if (root->data == target)
        return 1;

    if (printAncestors(root->left, target) || printAncestors(root->right, target)) {
        printf("%d ", root->data);
        return 1;
    }

    return 0;
}

int countLeafNodes(Node* root) {
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

int main() {
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    int choice, target;

    while (1) {
        printf("\nMenu:\n");
        printf("1. In-order Traversal (Iterative)\n");
        printf("2. Post-order Traversal (Iterative)\n");
        printf("3. Pre-order Traversal (Iterative)\n");
        printf("4. Print Parent of Element\n");
        printf("5. Calculate Depth of Tree\n");
        printf("6. Print Ancestors of Element\n");
        printf("7. Count Leaf Nodes\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("In-order Traversal (Iterative): ");
                inOrderIterative(root);
                printf("\n");
                break;

            case 2:
                printf("Post-order Traversal (Iterative): ");
                postOrderIterative(root);
                printf("\n");
                break;

            case 3:
                printf("Pre-order Traversal (Iterative): ");
                preOrderIterative(root);
                printf("\n");
                break;

            case 4:
                printf("Enter the element to find its parent: ");
                scanf("%d", &target);
                printParent(root, target);
                break;

            case 5:
                printf("Depth of the Tree: %d\n", calculateDepth(root));
                break;

            case 6:
                printf("Enter the element to find its ancestors: ");
                scanf("%d", &target);
                printf("Ancestors of %d: ", target);
                printAncestors(root, target);
                printf("\n");
                break;

            case 7:
                printf("Number of Leaf Nodes: %d\n", countLeafNodes(root));
                break;

            case 8:
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
