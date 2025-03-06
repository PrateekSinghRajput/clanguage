#include <stdio.h>

struct test1 {
    int a;      // 4
    char b;     // 1
                // +3 (slack bytes)
};

struct test2 {
    int a;      // 4            // offset = 0
    char b;     // 1            // offset = 4
                // +3 (slack)
    int c;      // 4            // offset = 8
    char d;     // 1            // offset = 12
                // +3 (slack)
    int e;      // 4            // offset = 16
    char f;     // 1            // offset = 20
                // +3 (slack)
};

struct test3 {
    int a;      // 4            // offset = 0
    char b;     // 1            // offset = 4
                // +1 (slack)
    short x;    // 2            // offset = 6
    int c;      // 4            // offset = 8
    char d;     // 1            // offset = 12
                // +3 (slack)
    int e;      // 4            // offset = 16
    char f;     // 1            // offset = 20
                // +1 (slack)
    short y;    // 2            // offset = 22
};

#define offsetof(type, member) ((long)(&((type*)0)->member))

int main() {
    printf("size test1 = %lu\n", sizeof(struct test1));
    printf("size test2 = %lu\n", sizeof(struct test2));
    printf("test2 offset of a = %ld\n", offsetof(struct test2, a));
    printf("test2 offset of b = %ld\n", offsetof(struct test2, b));
    printf("test2 offset of c = %ld\n", offsetof(struct test2, c));
    printf("test2 offset of d = %ld\n", offsetof(struct test2, d));
    printf("test2 offset of e = %ld\n", offsetof(struct test2, e));
    printf("test2 offset of f = %ld\n", offsetof(struct test2, f));
    printf("size test3 = %lu\n", sizeof(struct test3));
    printf("test3 offset of a = %ld\n", offsetof(struct test3, a));
    printf("test3 offset of b = %ld\n", offsetof(struct test3, b));
    printf("test3 offset of x = %ld\n", offsetof(struct test3, x));
    printf("test3 offset of c = %ld\n", offsetof(struct test3, c));
    printf("test3 offset of d = %ld\n", offsetof(struct test3, d));
    printf("test3 offset of e = %ld\n", offsetof(struct test3, e));
    printf("test3 offset of f = %ld\n", offsetof(struct test3, f));
    printf("test3 offset of y = %ld\n", offsetof(struct test3, y));
    return 0;
}