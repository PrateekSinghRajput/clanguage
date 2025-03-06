#include<stdio.h>

// Take information of student from user and depending on standard entered by user
// store percentage above 5th and grade below or equal 5th standard

typedef struct student{
    int rollno;
    char name[20];
    int std;
    char grade;
    float per;
}stud_t;

void accept_student(stud_t *);
void print_student(stud_t *);

int main(void)
{
    stud_t st;

    printf("sizeof(stud_t) = %d\n", sizeof(stud_t));      // 36

    accept_student(&st);
    print_student(&st);

    return 0;
}

void accept_student(stud_t *st)
{
    printf("Enter student info : \n");
    printf("Roll NO : ");
    scanf("%d", &st->rollno);

    printf("Name : ");
    scanf("%s", st->name);

    printf("Std : ");
    scanf("%d", &st->std);

    if(st->std <= 5)
    {
        printf("Grade : ");
        scanf("%*c%c", &st->grade);
    }
    else
    {
        printf("Percentage : ");
        scanf("%f", &st->per);
    }
}
void print_student(stud_t *st)
{
    printf("Roll NO : %d\n", st->rollno);
    printf("Name : %s\n", st->name);
    printf("Std : %d\n", st->std);
    if(st->std <= 5)
        printf("Garde : %c\n", st->grade);
    else
        printf("Percentage : %f\n", st->per);
}