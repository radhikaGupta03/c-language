#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct Stack
{
    int top;
    unsigned capacity;
    int *array;
};

struct Stack *createStack(unsigned capacity)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}

int isFull(struct Stack *stack)
{
    return stack->top == stack->capacity - 1;
}

int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

void push(struct Stack *stack, int data)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = data;
    printf("%d pushed to stack", data);
}

int pop(struct Stack *stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}

int peek(struct Stack *stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top];
}

void display(struct Stack *stack, int size)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", stack->array[i]);
    }
}

int main()
{
    unsigned capacity;
    printf("Enter the capacity of stack: ");
    scanf("%u", &capacity);
    struct Stack *stack = createStack(capacity);
    int size = 0, element;

    while (1)
    {
        printf("\nSTACK OPERATIONS:: ");
        printf("1.Push 2.Pop 3.Peek 4.Display 5.Exit\n");
        printf("Enter the choice: ");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element: ");
            scanf("%d", &element);
            push(stack, element);
            size++;
            break;
        case 2:
            printf("%d popped from the stack\n", pop(stack));
            size--;
            break;
        case 3:
            printf("%d is the top element of stack\n", peek(stack));
            break;
        case 4:
            display(stack, size);
            break;
        case 5:
            printf("----End Of Program----");
            return 0;
        default:
            printf("\nInvalid choice!!\n");
        }
    }
}