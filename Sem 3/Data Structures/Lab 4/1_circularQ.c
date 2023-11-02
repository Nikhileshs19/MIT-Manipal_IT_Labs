#include <stdio.h>
#define MAX_SIZE 5

struct CircularQueue{
    int front, rear;
    int arr[MAX_SIZE];
}q;

int isFull() {
    return (q.front == (q.rear + 1) % MAX_SIZE);
}

int isEmpty() {
    return (q.front == -1 && q.rear == -1);
}

void enqueue(int data) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }

    if (isEmpty()) {
        q.front = 0;
        q.rear = 0;
    } else {
        q.rear = (q.rear + 1) % MAX_SIZE;
    }

    q.arr[q.rear] = data;
    printf("%d enqueued successfully.\n",data);
}

 void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    }

    int data = q.arr[q.front];
    if (q.front == q.rear) {
        q.front = -1;
        q.rear = -1;
    } else {
        q.front = (q.front + 1) % MAX_SIZE;
    }

    printf("%d dequeued successfully.\n",data);
}

 void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }

    int i = q.front;
    printf("Queue elements: ");
    while (1) {
        printf("%d ",q.arr[i]);
        if (i == q.rear) {
            break;
        }
        i = (i + 1) % MAX_SIZE;
    }
    printf("\n");
}

int main() {
    q.front = -1, q.rear = -1;
    int choice, data;

    do {
        printf("-----------------------\n");
        printf("Circular Queue Program\n");
        printf("-----------------------\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d",&data);
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
