//1.Develop a program to find the sum and average of given N elements in an array.
#include <stdio.h>
int main() {
    int n ;
    float avg = 0, sum = 0;
    printf("Radhika Gupta\tSection:N\tStudent ID:200121193\n");
    printf("How many numbers do you want to enter:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    printf("Sum is %.3f and average of elements of array is %.2f.", sum, avg);
    return 0;
}