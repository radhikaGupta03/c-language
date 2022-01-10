// 7. Implementation of stack using linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node_type;

node_type *push(node_type *top)
{
    node_type *newnode;

    newnode = (node_type *)malloc(sizeof(node_type));
    printf("Enter the data:  ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (newnode == NULL)
    {
        printf("memory not allocted\n");
        return top;
    }

    if (top == NULL)
    {
        top = newnode;
    }
    else
    {
        newnode->next = top;
        top = newnode;
    }
    return top;
}

node_type *pop(node_type *top)
{
    node_type *temp = top;

    top = top->next;
    printf("Popped out element is %d\n", temp->data);
    free(temp);

    return top;
}

node_type *peek(node_type *top)
{
    printf("Top most element is %d\n", top->data);
    return top;
}

void Display(node_type *top)
{
    node_type *temp = top;
    printf("Stack elements:\n");

    do
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    } while (temp != NULL);
}

int main()
{
    int ch;
    node_type *top = NULL;

    do
    {

        printf("MENU!!!\n");
        printf("1.push, 2.pop, 3.peek, 4.Display, 5.Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            top = push(top);
            break;

        case 2:
            top = pop(top);
            break;

        case 3:
            top = peek(top);
            break;

        case 4:
            Display(top);
            break;

        case 5:
            return 0;
        
        default:
            printf("Invalid choice\n");
            break;
        }

    } while (1);
}