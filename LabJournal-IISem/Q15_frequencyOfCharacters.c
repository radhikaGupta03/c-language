#include<stdio.h>
int main()
{
    char ch[50];
    printf("Radhika Gupta\tSection:N\tStudent ID:200121193\n");
    int i, freq[50]={0}, count, flag, k, j, c=0, max=freq[0], temp;
    printf("Enter the string:\n");
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
        c++;
    for(i=0;ch[i]!='\0';i++) {
        count=0;
        flag=0;
        for(k=0;k<i;k++) {
            if(ch[k]==ch[i]) {
                flag=1;
                break;
            }
        }
        if(flag==0) {
            for(j=i;ch[j]!='\0';j++) {
                if(ch[i]==ch[j])
                    count++;
            }
        }
        freq[i]=count;
    }
    for(i=0;i<=c;i++) {
        if(freq[i]!=0)
           printf("Frequency of %c is %d\n",ch[i],freq[i]);
    }
    return 0;
}
