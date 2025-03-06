#include<stdio.h>

typedef struct employee
{
    int empid;          // 4
    char name[20];      // 20
    double salary;      // 8
}emp_t;                 // 32 bytes 

void accept_emp(emp_t *);
void print_emp(emp_t *);

int main(void)
{
    emp_t emp;

    accept_emp(&emp);
    print_emp(&emp);

    return 0;
}

void accept_emp(emp_t *emp)
{
    printf("Enter empid : ");
    scanf("%d", &emp->empid);

    printf("Enter emp name : ");
    scanf("%*c%[^\n]s", emp->name);

    printf("Enter salary : ");
    scanf("%lf", &emp->salary);
}
void print_emp(emp_t *emp)
{
    printf("%d %s %lf\n", emp->empid, emp->name, emp->salary);
}