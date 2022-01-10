//9.Develop a program to find smallest element of a single dimensional 
//array using pointers.
#include <stdio.h>
void inputArray(int*, int);
void findSmall(int*, int);

int main() {
    int n; 
    printf("Radhika Gupta\tSection:N\tStudent ID:200121193\n");
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    inputArray(arr, n);
    findSmall(arr, n);
    return 0;
}
void inputArray(int *a, int n) {
    printf("Enter the elements of array:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", (a + i));
}
void findSmall(int *a, int n) {
    int small = a[0];
    for(int i = 0; i < n; i++) {
        if (a[i] < small)
            small = a[i];
    }
    printf("Smallest element: %d", small);
}