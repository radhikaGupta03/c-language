/*7.Develop a program to find product of two matrices of order M x N and P x Q accepted 
 from the user.*/
 #include <stdio.h>
 int main() {
     printf("Radhika Gupta\tSection:N\tStudent ID:200121193\n");
     int r1, c1, r2, c2, count = 0;
     printf("Enter the number of rows and columns:\n");
     printf("For matrix A:");
     scanf("%d%d", &r1, &c1);
     printf("For matrix B:");
     scanf("%d%d", &r2, &c2);
     int a[r1][c1], b[r2][c2], d[r1][c2];
     printf("Enter the elements of matrix A:\n");
     for(int i = 0; i < r1; i++) {
         for(int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
     }
     printf("Enter the elements of matrix B:\n");
     for(int i = 0; i < r2; i++) {
         for(int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
     }
     for(int i = 0; i < r1; i++) {
         for(int j = 0; j < c2; j++) {
             d[i][j] = 0;
             for(int k = 0; k < c1; k++)
                d[i][j] = d[i][j] + (a[i][k] * b[k][j]);
         }
     }
     printf("C = A X B\n");
     for(int i = 0; i < r1; i++) {
         for(int j = 0; j < c2; j++)
            printf("%d ", d[i][j]);
         printf("\n");
     }
     return 0;
 }
