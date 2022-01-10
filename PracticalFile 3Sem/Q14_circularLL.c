#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
void push(struct node **head, int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->info = val;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
        newNode->next = *head;
    }
    else
    {
        struct node *lastNode = *head;
        while (lastNode->next != *head)
        {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
        newNode->next = *head;
    }
}
void print(struct node *ptr)
{
    struct node *temp = ptr;
    do
    {
        printf("%d ", temp->info);
        temp = temp->next;
    } while (temp != ptr);
}
int main()
{
    struct node *start = NULL;
    push(&start, 19);
    push(&start, 18);
    push(&start, 12);
    push(&start, 11);
    push(&start, 10);
    printf("Circular Linked list is:\n");
    print(start);
}