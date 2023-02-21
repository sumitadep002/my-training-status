/*
Create a structure for student/employee information with suitable members and do the following
- Creating variables, input, output operations
- initialization(complete or partial) of variables
- create a pointer of struct type, and assign address of variable
- access members from the pointer using arrow operator
- calculate size of variable, offset of each member
- create alias for the structure type, pointer type using typedef
*/
#include<stdio.h>

struct student
{
    char name[20];
    unsigned long long enrollnment_number;
    unsigned short grade;
};
void get_student_details(student *s)
{
    printf("\nenter the name of the name of the student: ");
    gets(s->name);
    printf("\nenter the enrollnment number:");
    scanf("%llu", &s->enrollnment_number);
    printf("\nenter the grade of the student");
    scanf("%hu", &s->grade);
}
void print_student_details(student *s)
{
    printf("\nname of the name of the student: ");
    printf("%s",s->name);
    printf("\nenrollnment number:");
    printf("%llu", s->enrollnment_number);
    printf("\ngrade of the student");
    printf("%hu", s->grade);
}
struct employee
{
    char name[20];
    unsigned long long employee_number;
    char department[20];
};
void get_employee_details(employee *e)
{
    printf("\nenter the name of the employee: ");
    gets(e->name);
    printf("\nenter the emplyee number:");
    scanf("%llu", &e->employee_number);
    printf("\nenter the department of employee:");
    gets(e->department);
}
void print_employee_details(employee *e)
{
    printf("\nname of the employee: ");
    printf("%s",e->name);
    printf("\nemplyee number:");
    scanf("%llu", e->employee_number);
    printf("\ndepartment of employee:");
    scanf("%hu", e->department);
}

typedef struct student student;
typedef struct employee employee;

int main()
{
    student s1;
    employee e1;
    get_student_details(&s1);
    print_student_details(&s1);

    get_employee_details(&e1);
    print_employee_details(&e1);
    return 0;
}