/*2.Develop a program to count numbers greater than, less than or equal to a number 
‘K’ in an array by accepting the value of K from the user.*/

#include <stdio.h>
int main() {
    int n ;
    printf("Radhika Gupta\tSection:N\tStudent ID:200121193\n");
    printf("How many numbers do you want to enter:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int num, c1 = 0, c2 = 0, c3 = 0;
    printf("Enter the number you want to compare with:");
    scanf("%d", &num);
    for(int i = 0; i < n; i++) {
        if (arr[i] > num)
            c1++;
        else if (arr[i] < num)
            c2++;
        else
            c3++;
    }
    printf("The count of numbers greater than %d is:%d\n", num, c1);
    printf("The count of numbers less than %d is:%d\n", num, c2);
    printf("The count of numbers equal to %d is:%d\n", num, c3);
    return 0;
}
