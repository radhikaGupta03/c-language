#include <stdio.h>
int repeating(int arr[], int n)
{
    int count = 0, c = 0, temp;
    for (int i = 0; i < n && c != 3; i++)
    {
        count = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > 0)
        {
            temp = arr[i];
            c++;
        }
    }
    return temp;
}
int main()
{
    int n;
    printf("Enter the size of Array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of Array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("The 3rd repeating element of Array is: %d", repeating(arr, n));
    return 0;
}
