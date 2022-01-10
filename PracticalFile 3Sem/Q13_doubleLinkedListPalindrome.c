#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
    struct node *prev;
};
void push(struct node **head, int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->info = val;
    newNode->next = NULL;
    if (*head == NULL)
    {
        newNode->prev = NULL;
        *head = newNode;
    }
    else
    {
        struct node *lastNode = *head;
        while (lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
        newNode->prev = lastNode;
    }
}
int palin(struct node *left)
{
    if (left == NULL)
        return 1;
    struct node *right = left;
    while (right->next != NULL)
        right = right->next;
    while (left != right)
    {
        if (left->info != right->info)
            return 0;
        left = left->next;
        right = right->prev;
    }
    return 1;
}
void print(struct node *ptr)
{
    struct node *temp = ptr;
    while (temp != NULL)
    {
        printf("%d ", temp->info);
        temp = temp->next;
    }
}
int main()
{
    struct node *start = NULL;
    int n;
    printf("How many elements do you want to insert in the list?\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        int item;
        scanf("%d", &item);
        push(&start, item);
    }
    if (palin(start))
        printf("list is palindrome");
    else
        printf("list is not palindrome");
}
