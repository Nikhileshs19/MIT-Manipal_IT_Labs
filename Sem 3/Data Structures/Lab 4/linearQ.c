#include <stdio.h>
#define MAX_SIZE 10

struct Queue{
    int f, r;
    int q[MAX_SIZE];
};

void insert(struct Queue *queue, int item) {
    if (queue->r == MAX_SIZE - 1) {
        printf("Queue overflow\n");
        return;
    }
    queue->r++;
    queue->q[queue->r] = item;
}

int delete(struct Queue *queue) {
    if (queue->f > queue->r)
        return -1;
    int deletedItem = queue->q[queue->f];
    queue->f++;
    return deletedItem;
}

void display(struct Queue *queue) {
    if (queue->f > queue->r) {
        printf("Empty queue\n");
        return;
    }
    printf("Contents:");
    for (int i = queue->f; i <= queue->r; i++)
    printf(" %d", queue->q[i]);
    printf("\n");
}

int main() {
    struct Queue q;
    q.f = 0;
    q.r = -1;
    int choice, item;
    while (1) {
        printf("\n1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Display the queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &item);
                insert(&q, item);
                break;
            case 2:
                item = delete(&q);
                if (item != -1)
                printf("Deleted item: %d\n", item);
                else
                printf("Queue is empty.\n");
                break;
            case 3:
                display(&q);
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

