/*
20. Write a program to read 20 integers using command line arguments and store them into a
file Numbers.txt in the current working path. Later by reading from that file separate them
into two different files odd.txt and even.txt such that odd numbers are copied to odd.txt and
even numbers are copied to even.txt files respectively in the same current working path
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int args,char *num[]) {
    FILE *fptr, *fp, *fp2;
    int n,arr[20];
    printf("Radhika Gupta\tSection:N\tStudent ID:200121193\n");

    fptr = fopen("Numbers.txt","w");
    if(fptr == NULL) {
        printf("Error!!");
        exit(-1);
    }
    for(int i = 0 ; i < 20 ; i++) {
        fprintf(fptr,"%d ",atoi(num[i])); 
    }
    fclose(fptr);

    fptr = fopen("Numbers.txt","r");
    fp = fopen("Even.txt","w");
    fp2 = fopen("Odd.txt","w");

    for(int i = 0 ; i < 20 ; i++)
        fscanf(fptr,"%d",&arr[i]);

    for(int i = 0 ; i < 20 ; i++) {
        if(arr[i] % 2 == 0)
            fprintf(fp,"%d",arr[i]);
        else
            fprintf(fp2,"%d",arr[i]);
    }

    fclose(fptr);
    fclose(fp);
    fclose(fp2);
}