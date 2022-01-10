/*18. Write a program to create a file with three paragraphs. Display its contents and count of
number of consonant and vowels.*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("Radhika Gupta\tSection:N\tStudent ID:200121193\n");
    FILE *fptr;
    char buffer[3000];
    fptr = fopen("ThreePara.txt","w");
    if(fptr == NULL) {
        printf("Error!!");
        exit(1);
    }
    int i = 1;
    while(i <= 3) {
        printf("\n\nEnter Paragraphs %d\n",i);
        fgets(buffer,3000,stdin);
        fputs(buffer,fptr);
        i++;
    }
    fclose(fptr);
    printf("\n\nThe content Entered was:\n\n");
    fptr = fopen("ThreePara.txt","r");
    int consonant = 0, vowel = 0;
    int ch;
    while((ch = fgetc(fptr))!=EOF) {
        printf("%c",ch);
        if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {

            if(ch == 'a' || ch == 'e' || ch == 'e' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'E' || ch == 'O' || ch == 'U')
                vowel++;
            else
                consonant++;
        }
    }
    printf("Consonants : %d , Vowels : %d",consonant,vowel);
    fclose(fptr);
    return 0;
}