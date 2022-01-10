#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Queue {
    int front, rear, size;
    int * arr;
    unsigned capacity;
};

struct Queue * createQueue(unsigned capacity) {
    struct Queue * q = (struct Queue *)malloc(sizeof(struct Queue));
    q -> capacity = capacity;
    q -> front = q -> size = 0;

    q -> rear = capacity - 1;
    q -> arr = (int *)malloc(q -> capacity * sizeof(int));
    return q;
}

int isFull(struct Queue * q) {
    return (q -> size == q -> capacity);
}

int isEmpty(struct Queue * q) {
    return (q -> size == 0);
}

void enqueue(struct Queue * q, int item) {
    if (isFull(q))
        return ;
    q -> rear = (q -> rear + 1) % q -> capacity;
    q -> arr[q -> rear] = item;
    q -> size = q -> size + 1;
    printf("\n%d enqueued to queue\n", item);
}

int dequeue(struct Queue * q) {
    if (isEmpty(q)) {
        printf("\nCheck\n");
        return INT_MIN;
    }
    int item = q -> arr[q -> front];
    q -> front = (q -> front + 1) % q -> capacity;
    q -> size = q -> size - 1;
    printf("\nitem: %d\n", item);
    return item;
}

int front(struct Queue * q) {
    if (isEmpty(q))
        return INT_MIN;
    return q -> arr[q -> front];
}

int rear(struct Queue * q) {
    if(isEmpty(q))
        return INT_MIN;
    return q -> arr[q -> rear];
}

int main() {
    struct Queue * q;
    int c;
    int item;
    int deleted;
    printf("Enter the capacity of queue: ");
    scanf("%d", &c);
    q = createQueue(c);
    printf("\nMENU\n1.Enqueue\n2.Dequeue\n3.Front Value\n4.Rear Value\n5.Exit\n");
    do {
        int choice;
        printf("\nEnter the choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter the item: ");
                scanf("%d", &item);
                enqueue(q, item);
                break;
            case 2:
                deleted = dequeue(q);
                printf("%d deleted from queue\n", deleted);
                break;
            case 3:
                printf("\nFront value is: %d", front(q));
                break;
            case 4:
                printf("\nRear value is: %d", rear(q));
                break;
            case 5:
                printf("\n\t'END OF PROGRAM'\t\n\n");
                return 0;
            default: printf("Invalid choice!!");
        }
    }while(1);
}