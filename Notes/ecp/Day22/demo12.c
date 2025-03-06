#include <stdio.h>

#pragma pack(1)

struct student {
    int roll;       // 4
    char name[20];  // 20
    double marks;   // 8
    int std;        // 4
};

#define offsetof(type, member) ((long)(&((type*)0)->member))

int main() {
    struct student s1 = { 101, "Nilesh", 78.66, 10 };
    printf("%d, %s, %lf, %d\n",
                        *(int*)((char*)&s1 + 0),
                        ((char*)&s1 + 4),
                        *(double*)((char*)&s1 + 24),
                        *(int*)((char*)&s1 + 32));

    printf("%d, %s, %lf, %d\n",
                        *(int*)((char*)&s1 + offsetof(struct student, roll)),
                        ((char*)&s1 + offsetof(struct student, name)),
                        *(double*)((char*)&s1 + offsetof(struct student, marks)),
                        *(int*)((char*)&s1 + offsetof(struct student, std)));
    return 0;
}