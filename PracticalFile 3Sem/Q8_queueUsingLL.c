#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct queue
{
    struct node *front;
    struct node *rear;
};

struct queue *enqueue(struct queue *ptr)
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data:  ");
    scanf("%d", &newnode->data);

    if (newnode == NULL)
    {
        printf("Memory not allocated\n");
        return ptr;
    }

    if (ptr->front == NULL && ptr->rear == NULL)
    {
        ptr->front = newnode;
        ptr->rear = newnode;

        ptr->front->next = ptr->rear->next = NULL;
    }

    else
    {
        ptr->rear->next = newnode;
        ptr->rear = newnode;
        ptr->rear->next = NULL;
    }
    return ptr;
}

struct queue *dequeue(struct queue *ptr)
{
    struct node *temp;
    temp = ptr->front;

    if (ptr->front == NULL)
    {
        printf("Queue is empty\n");
    }

    else
    {
        ptr->front = ptr->front->next;
        printf("Deleted value is %d\n", temp->data);
        free(temp);
    }

    return ptr;
}

struct queue *peek(struct queue *ptr)
{
    printf("The First element of the queue is %d\n", ptr->front->data);
    return ptr;
}

void Display(struct queue *ptr)
{
    struct node *temp;
    temp = ptr->front;

    if (ptr == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {

        do
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        } while (temp != ptr->rear);
        printf("%d\n", temp->data);
    }
}
int main()
{
    int ch;
    struct queue *Q;
    Q = (struct queue *)malloc(sizeof(struct queue));
    Q->front = NULL;
    Q->rear = NULL;

    do
    {
        printf("  Menu  \n");
        printf("1.Enqueue  2.Dequeue  3.Peek  4.Display  5.Exit\n");
        printf("\n Enter your choice : ");
        scanf("%d", &ch);

        switch(ch)
        {
        case 1:
            enqueue(Q);
            break;

        case 2:
            dequeue(Q);
            break;

        case 3:
            peek(Q);
            break;

        case 4:
            Display(Q);
            break;

        case 5:
            printf("Exited!!");
            return 0;

        default:
            printf("Invalid choice\n");
            break;
        }

    } while (1);
}