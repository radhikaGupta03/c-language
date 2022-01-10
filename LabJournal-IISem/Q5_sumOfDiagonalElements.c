//5.Develop a program to find the sum of diagonal elements of a matrix of 
//order MxN accepted from the user.
#include <stdio.h>
int main() {
    printf("Radhika Gupta\tSection:N\tStudent ID:200121193\n");
    int r, c, psum = 0, ssum = 0;
    printf("Enter number of rows and columns:");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    printf("Enter the elements of matrix: \n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if (i == j)
                psum += arr[i][j];
            if((i + j) == (r - 1))
                ssum += arr[i][j];
        }
    }
    printf("Sum of principal diagonal is: %d\n", psum);
    printf("Sum of secondary diagonal is: %d\n", ssum);
    return 0;
}