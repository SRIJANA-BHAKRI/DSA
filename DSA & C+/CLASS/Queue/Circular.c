
#include <stdio.h>
#include <stdlib.h>
#define N 5

struct cqueue {
    int rear, front;
    int items[N];
};

typedef struct cqueue cq;

void initializeQueue(cq *q) {
    q->front = -1;
    q->rear = -1;
}

void enqueue(cq *q, int new_item) {
    if ((q->rear + 1) % N == q->front) {
        printf("Queue is full! Overflow.\n");
    } else if (q->front == -1 && q->rear == -1) {
        q->front = 0;
        q->rear = 0;
        q->items[q->rear] = new_item;
    } else {
        q->rear = (q->rear + 1) % N;
        q->items[q->rear] = new_item;
    }
}

void dequeue(cq *q) {
    if (q->front == -1) {
        printf("Queue is empty! Underflow.\n");
    } else if (q->front == q->rear) {
        printf("Dequeued: %d\n", q->items[q->front]);
        q->front = -1;
        q->rear = -1;
    } else {
        printf("Dequeued: %d\n", q->items[q->front]);
        q->front = (q->front + 1) % N;
    }
}

void display(cq *q) {
    if (q->front == -1) {
        printf("Queue is empty!\n");
    } else {
        int i = q->front;
        printf("Queue elements: ");
        while (i != q->rear) {
            printf("%d ", q->items[i]);
            i = (i + 1) % N;
        }
        printf("%d\n", q->items[q->rear]);
    }
}

int main() {
    cq q;
    initializeQueue(&q);

    int ch, value;

    printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");

    do {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(&q, value);
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                display(&q);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (ch != 4);

    return 0;
}
