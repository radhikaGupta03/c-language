/*17. Develop a program to read a set of Name, Roll Number, Date of Birth and Date of
Admission of the students in the college from the keyboard where the date of birth and date
of admission consists of three members such as day, month and year as a separate structure.*/
#include <stdio.h>
struct dob {
    int day;
    int month;
    int year;
};
struct admission {
    int day;
    int month;
    int year;
};
struct Student {
    char name[30];
    int roll_no;
    struct dob d1;
    struct dob d2;
};
int main() {
    printf("Radhika Gupta\tSection:N\tStudent ID:200121193\n");
    int n;
    printf("\nEnter the number of student:-");
    scanf("%d",&n);
    struct Student a[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the name of the student-:");
        fflush(stdin);
        gets(a[i].name);
        printf("Enter the roll no. of student:-");
        scanf("%d",&a[i].roll_no);
        printf("\n");
        printf("Enter the DOB of student:-\n");
        printf("Enter the day:-");
        scanf("%d",&a[i].d1.day);
        printf("Enter the month:-");
        scanf("%d",&a[i].d1.month);
        printf("Enter the year:-");
        scanf("%d",&a[i].d1.year);
        printf("Enter the DOA of student:-\n");
        printf("Enter the day:-");
        scanf("%d",&a[i].d2.day);
        printf("Enter the month:-");
        scanf("%d",&a[i].d2.month);
        printf("Enter the year:-");
        scanf("%d",&a[i].d2.year);
    }
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d :\n",i + 1);
        printf("Name:- %s\n",a[i].name);
        printf("Roll NO:- %d\n",a[i].roll_no);
        printf("DOB of the student:- %d %d %d\n",a[i].d1.day,a[i].d1.month,a[i].d1.year);
        printf("DOA of the student:- %d %d %d\n",a[i].d2.day,a[i].d2.month,a[i].d2.year);
    }
}