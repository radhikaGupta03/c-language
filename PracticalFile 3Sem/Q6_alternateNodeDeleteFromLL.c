#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
void insert(struct node **head, int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->info = val;
    newnode->next = NULL;
    if (*head == NULL)
    {
        *head = newnode;
    }
    else
    {
        struct node *last = *head;
        while (last->next != NULL)
            last = last->next;
        last->next = newnode;
    }
}
void delete (struct node *start)
{
    int i = 1;
    struct node *temp = start;
    while (start->next != NULL)
    {
        if (i % 2 == 0)
        {
            temp->next = start->next;
            free(start);
            start = temp->next;
            i++;
        }
        else
        {
            i++;
            temp = start;
            start = start->next;
        }
    }
}
void display(struct node *start)
{
    while (start->next != NULL)
    {
        printf("%d ", start->info);
        start = start->next;
    }
}
int main()
{
    struct node *head = NULL;
    insert(&head, 11);
    insert(&head, 12);
    insert(&head, 13);
    insert(&head, 14);
    insert(&head, 15);
    insert(&head, 16);
    insert(&head, 17);
    insert(&head, 18);
    insert(&head, 19);
    insert(&head, 20);
    printf("before\n");
    display(head);
    delete (head);
    printf("\nafter\n");
    display(head);
    return 0;
}
