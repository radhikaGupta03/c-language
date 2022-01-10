/*8.Develop a program using a function name SWAP to exchange two numbers
without using a temporary variable. Accept the numbers in the main program 
and display their swapped values to the console in the calling program itself.*/
#include <stdio.h>
int swap(int*, int*);
int main() {
    int n1, n2;
    printf("Enter two numbers to be swapped:");
    scanf("%d%d", &n1, &n2);
    printf("var1 = %d, var2 = %d", n1, n2);
    swap(&n1, &n2);
    printf("\nAfter swapping values are:\n");
    printf("var1 = %d, var2 = %d", n1, n2);
    return 0;
}
int swap(int* x, int* y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}