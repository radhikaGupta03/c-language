/*4.Develop a program to insert an element into a list of elements in the Array (Hint: Use
 Switch case): a. At first b. At last c. At particular position of an array.*/
#include <stdio.h>
int main() {
    printf("Radhika Gupta\tSection:N\tStudent ID:200121193\n");
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int choice, value, pos;
    printf("Old array:\n");
    for(int i = 0; i < 15; i++)
        printf("%d ", arr[i]);
    printf("\nWhere you want to insert element?\n");
    printf("Press 1: at first\n");
    printf("Press 2: at last\n");
    printf("Press 3: at particular position of array\n");
    scanf("%d", &choice);
    printf("Enter the value you want to insert:");
    scanf("%d", &value);
    switch(choice) {
        case 1:
            for(int i = 14; i >= 0; i--)
                arr[i +1] = arr[i];
            arr[0] = value;
            break;
        case 2:
            arr[15] = value;
            break;
        case 3:
            printf("Enter the position at which you want to insert element:");
            scanf("%d", &pos);
            for(int i = 14; i >= pos; i--)
                arr[i + 1] = arr[i];
            int temp = arr[pos - 1];
            arr[pos - 1] = value;
            arr[pos] = temp;
            break;
    }
    printf("New array:\n");
    for(int i = 0; i <= 15; i++)
        printf("%d ", arr[i]);
    return 0;
}
