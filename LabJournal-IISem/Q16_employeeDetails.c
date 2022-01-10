/*16. Develop a program in C to read a structure in the main program of an Employee that
contains Name, EmpCode and Salary as the members. Write a function to the details of the
employee in the following format.*/
#include <stdio.h>
typedef struct Corporation {
    char name[30];
    char empc[30];
    char dob[30];
    float salary;
} employee;
void printData(employee emp) {
    printf("Name :%s\n",emp.name);
    printf("EmpCode :%s\n",emp.empc);
    printf("Dob : %s\n",emp.dob);
    printf("Net.Salary :%6.2f", emp.salary);
}
int main() {
    printf("Radhika Gupta\tSection:N\tStudent ID:200121193");
    employee emp;
    printf("\nName: ");
    fflush(stdin);
    gets(emp.name);
    printf("EmpCode: ");
    fflush(stdin);
    scanf("%s",emp.empc);
    printf("D.O.B: ");
    fflush(stdin);
    scanf("%s",emp.dob);
    printf("Net.Salary: ");
    scanf("%f",&emp.salary);
    printData(emp);
    return 0;
}