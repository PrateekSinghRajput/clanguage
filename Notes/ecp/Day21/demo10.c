#include <stdio.h>

#pragma pack(1)

struct student {
    int roll;       // 4
    char name[20];  // 20
    double marks;   // 8
    int std;        // 4
};

#define offsetof(type, member) (&((type*)0)->member)

int main() {
    struct student s1 = { 101, "Nilesh", 78.66, 10 };
    printf("sizeof(struct student) = %lu\n", sizeof(struct student));
    struct student *p = NULL;
    printf("%lu, %lu, %lu, %lu\n", &p->roll, &p->name, &p->marks, &p->std);
    // "p" is equivalent to "(struct student*)0"
    printf("%lu, %lu, %lu, %lu\n", &((struct student*)0)->roll, &((struct student*)0)->name, &((struct student*)0)->marks, &((struct student*)0)->std);
    printf("%lu, %lu, %lu, %lu\n", 
            offsetof(struct student, roll), 
            offsetof(struct student, name),
            offsetof(struct student, marks),
            offsetof(struct student, std));   
    return 0;
}