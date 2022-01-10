/*10.Write a C program to accept & store N real numbers into an array. Find their mean and
standard deviation using pointers and display the same to the output screen.*/
#include <stdio.h>
#include <math.h>
void inputArray(int*, int);
void mean(int*, int);
void stdDev(int*, int);
float m = 0;
int main() {
    int n;
    printf("Radhika Gupta\tSection:N\tStudent ID:200121193\n");
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    inputArray(arr, n);
    mean(arr, n);
    stdDev(arr, n);
    return 0;
}
void inputArray(int* a, int n) {
    printf("Enter the elements of array:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", (a + i));
}
void mean(int* a, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) 
        sum += a[i];
    m = (float)sum / n;
    printf("mean: %.2f\n", m);
}
void stdDev(int *a, int n) {
    float sum = 0;
    for(int i = 0; i < n; i++) 
        sum += ((a[i] - m) * (a[i] - m));
    float new_mean = (float)sum / n;
    float sd = sqrt(new_mean);
    printf("Standard deviation: %.2f", sd);
}