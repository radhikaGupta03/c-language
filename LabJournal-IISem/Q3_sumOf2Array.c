//3.Develop a program to find sum of two equal and unequal size arrays into third array.
#include <stdio.h>
int main() {
    int n, m;
    printf("Radhika Gupta\tSection:N\tStudent ID:200121193\n");
    printf("Enter the size of both arrays:");
    scanf("%d%d", &n, &m);
    int arr1[n], arr2[m];
    printf("Enter the elements of first array:\n");
    for(int i = 0; i < n; i++) 
        scanf("%d", &arr1[i]);
    printf("Enter the elements of second array:\n");
    for(int i = 0; i < m; i++) 
        scanf("%d", &arr2[i]);
    int x = (m > n) ? m : n;
    int arr3[x];
    for(int i = 0; i < x; i++) {
        if (i < m + n - x)
            arr3[i] = arr1[i] + arr2[i];
        else
            arr3[i] = (m + n) ? arr2[i] :arr1[i];
    }
    printf("The new array formed is:\n");
    for(int i = 0; i < x; i++)
        printf("%d ", arr3[i]);
    return 0;
}