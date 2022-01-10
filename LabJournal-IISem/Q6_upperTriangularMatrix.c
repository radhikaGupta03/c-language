/*6.Develop a program test whether a given matrix of order MxN is an upper - triangular
matrix or not. An upper triangular Matrix is one in which all the elements below its principal
diagonal are 0.*/
#include <stdio.h>
int main() {
    printf("Radhika Gupta\tSection:N\tStudent ID:200121193\n");
    int r, c, count = 0;
    printf("Enter number of rows and columns:");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    printf("Enter the elements of matrix: \n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);
    }
    for(int i = 1; i < r; i++) {
        for(int j = 0; j < i; j++) {
            if (arr[i][j] == 0)
                count += 1;
        }
    }
    if (count == 3)
        printf("Matrix is upper triangular\n");
    else
        printf("Matrix is not upper triangular\n");
    return 0;
}