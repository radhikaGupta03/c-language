/*
12. Develop a program to Concatenate Two Strings and display the concatenated 
string to the output screen.*/

#include <stdio.h>
void join(char s1[], char s2[]) {
    int i = 0,j = 0;
    while(s1[i] != '\0') {
        i++;
    }
    while(s2[j] != '\0') {
        s1[i-1] = s2[j];
        i++;
        j++;
    }
    for(int j = i; j <= 100; j++)
        s1[j] = '\0';
}

int main() {

    printf("Radhika Gupta\tSection:N\tStudent ID:200121193\n");
    char s1[100] ,s2[100];
    printf("Enter the string s1:");
    fgets(s1,100,stdin);
    printf("Enter the string s2:");
    fgets(s2,100,stdin);

    join(s1,s2);
    printf("Concatenated string is: %s \n",s1);
    return 0;
}