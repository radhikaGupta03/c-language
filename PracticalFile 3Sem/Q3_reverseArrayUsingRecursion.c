#include <stdio.h>
#include <stdlib.h>
void swap(int *arr, int leftIndex, int rightIndex) {
    int temp;
    temp = arr[leftIndex];
    arr[leftIndex] = arr[rightIndex];
    arr[rightIndex] = temp;
}

void reverse(int *arr, int leftIndex, int rightIndex)
{
    if (arr == NULL) {
        printf("Invalid input");
        return;
    }

    if (leftIndex < rightIndex) {
        swap(arr, leftIndex, rightIndex);
        reverse(arr, leftIndex + 1, rightIndex - 1);
    }
}
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    reverse(ptr, 0, n - 1);
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", ptr[i]);
    return 0;
}
