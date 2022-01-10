/*19. Write a program to create a file and copy its contents to another file such that there is no
space between words in copied file. Display the content of the newly copied file to the output
screen*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Radhika Gupta\tSection:N\tStudent ID:200121193\n");
    FILE *fptr, *fptr2;
    char str[200];
    fptr = fopen("mainText.txt","w");
    if(fptr == NULL) {
        printf("Error!!");
        exit(1);
    }
    printf("\n\nEnter the Text\n");
    fgets(str,200,stdin);
    fputs(str,fptr);

    fclose(fptr);

    printf("\nTEXT AFTER REMOVING SPACES\n\n");

    fptr = fopen("mainText.txt","r");
    fptr2 = fopen("CopyText.txt","w");
    int ch;
    while((ch=fgetc(fptr))!=EOF) {
        if(ch != 32)
            fputc(ch,fptr2);
    }
    fclose(fptr2);
    fclose(fptr);

    fptr = fopen("CopyText.txt","r");
    while(fgets(str,200,fptr)!=NULL)
        printf("%s",str);
    fclose(fptr);

    return 0;
}