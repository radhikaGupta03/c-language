/*14. Develop a program to compare two strings using a function and return 1 if 
the strings are equal and 0 otherwise without using strcmp( ) function. 
Display the appropriate message to the output screen.*/
#include <stdio.h>
#define MAX 100
int stringcmp(char *a, char *b) {
    int i = 0, j = 0;
    while(a[i] != '\0')
        i++;
    while(b[j] != '\0')
        j++;
    if(i == j) {
        while(i != 0) {
            if(a[i] == b[j]) {
                i--;
                j++;
            } else return 0;
            return 1;
        }
    } else return 0;
}      
int main() {
    printf("Radhika Gupta\tSection:N\tStudent ID:200121193\n");
    char s1[MAX], s2[MAX];
    printf("Enter two string:\n");
    fgets(s1,MAX,stdin);
    fgets(s2,MAX,stdin);
    int result = stringcmp(s1,s2);
    if(result) {
        printf("The Strings are equal");
    } else {
        printf("The strings are not equal");
    }
}