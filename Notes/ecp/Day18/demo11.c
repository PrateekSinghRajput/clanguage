#include<stdio.h>

typedef struct emp{
    int empid;
    char name[20];
    float sal;
}emp_t;

void accept_emp(emp_t *);
void print_emp(emp_t *);

int main(void)
{
    emp_t e1;
    emp_t e2;
    FILE *fp = fopen("f11.txt", "w");
    accept_emp(&e1);
    fprintf(fp, "%d %s %f\n", e1.empid, e1.name, e1.sal);
    fclose(fp);

    fp = fopen("f11.txt", "r");
    fscanf(fp, "%d %s %f", &e2.empid, e2.name, &e2.sal);
    print_emp(&e2);
    fclose(fp);

    return 0;
}

void accept_emp(emp_t *e)
{
    printf("Enter emp info : (id, name, sal) : ");
    scanf("%d %s %f", &e->empid, e->name, &e->sal);
}
void print_emp(emp_t *e)
{
    printf("%d %s %f\n", e->empid, e->name, e->sal);
}