/*11. Develop a program to copy a string to another without
 using strcpy function.*/

#include <stdio.h>
int main() {
    printf("Radhika Gupta\tSection:N\tStudent ID:200121193\n");
    char s1[1000], s2[1000];
    printf("Enter the string:");
    fgets(s1,100,stdin);
    char *ptr1 = s1 , *ptr2 = s2;

    while(*ptr1 != '\0') {
        *ptr2 = *ptr1;
        *ptr1++;
        *ptr2++;
    }
    *ptr2 = '\0';
    printf("String s1 is: %s\n",s1);
    printf("String s2 is: %s\n",s2);
    return 0;
}