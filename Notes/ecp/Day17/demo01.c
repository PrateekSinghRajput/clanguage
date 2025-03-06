#include<stdio.h>

void fun(emp_t *ptr);

typedef struct emp{
    int empid;
    char name[20];
    float sal;
}emp_t;

void fun(emp_t *ptr)
{
    printf("ptr = %u\n", ptr);
}

void function(int (*ptr)[3])
{
    
}

int main(void)
{
    int arr[2][3];

    function(&arr[0]);
    emp_t e1;

    printf("&e1 = %u\n", &e1);


    printf("Herer\n");
    printf("Herer\n");
    printf("Herer\n");
    printf("Herer\n");

    fun(&e1);

    printf("Herer\n");
    printf("Herer\n");
    printf("Herer\n");
    printf("Herer\n");
    printf("Herer\n");
    

    printf("&e1 = %u\n", &e1);

    return 0;
}