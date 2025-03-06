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
    emp_t e1[3] = {1, "xyz", 345.6f, 2, "pqr", 65372.6f, 3, "abc", 6576.09f};
    emp_t e2[3];
    
    FILE *fp = fopen("f13.txt", "w");
    fwrite(e1, sizeof(emp_t), 3, fp);
    fclose(fp);

    fp = fopen("f13.txt", "r");
    fread(e2, sizeof(emp_t), 3, fp);
    fclose(fp);
    for(int i = 0 ; i < 3 ; i++)
        print_emp(&e2[i]);

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