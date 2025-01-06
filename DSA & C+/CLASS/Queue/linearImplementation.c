#include <stdio.h>
#define SIZE 5

// Define the Queue structure
typedef struct {
    int items[SIZE];
    int front, rear;
} Queue;

// Function to initialize the queue
void initializeQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

// Function to check if the queue is full
int isFull(Queue *q) {
    return q->rear == SIZE - 1;
}

// Function to check if the queue is empty
int isEmpty(Queue *q) {
    return q->front == -1 || q->front > q->rear;
}

// Function to add an element to the queue
void enqueue(Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full!\n");
    } else {
        if (q->front == -1) q->front = 0; // Initialize front for the first element
        q->items[++q->rear] = value;      // Increment rear and add the value
        printf("%d enqueued to the queue.\n", value);
    }
}

// Function to remove an element from the queue
void dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
    } else {
        printf("%d dequeued from the queue.\n", q->items[q->front++]);
        if (q->front > q->rear) initializeQueue(q); // Reset if the queue becomes empty
    }
}

// Function to display the queue elements
void display(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements: ");
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d ", q->items[i]);
        }
        printf("\n");
    }
}

// Function to show the front element of the queue
void peek(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
    } else {
        printf("Front element is: %d\n", q->items[q->front]);
    }
}

// Main function with menu-driven operations
int main() {
    Queue q;  // Declare a queue
    initializeQueue(&q); // Initialize the queue

    int choice, value;
    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Peek\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
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
                peek(&q);
                break;
            case 5:
                return 0;  // Exit the program
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
