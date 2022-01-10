/*
13. Develop a program to reverse a string using pointers. Display the reversed
string to the console.*/

#include <stdio.h>
void reverse(char *s1, char *s2) {
    int i = 0, j = 0;
    while(s1[i] != '\n') {
        i++;
    }
    while(i >= 0) {
        s2[j] = s1[i];
        i--;
        j++;
    }
    s2[j] = '\0';
}

int main() {
    printf("Radhika Gupta\tSection:N\tStudent ID:200121193\n");
    char s1[100] ,s2[100];
    printf("\nEnter the string s1:\n");
    fgets(s1,100,stdin);

    reverse(s1,s2);
    printf("Reverse string is: %s\n",s2);
    return 0;
}