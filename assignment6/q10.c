#include <stdio.h>

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int (*p)[4] = arr;

    printf("sizeof(p) = %lu\n", sizeof(p));
    printf("sizeof(*p) = %lu\n", sizeof(*p));
    printf("sizeof(**p) = %lu\n", sizeof(**p));

    printf("p = %p\n", (void*)p);
    printf("p+1 = %p\n", (void*)(p+1));

    int i = 1, j = 2;
    printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
    printf("(*(p+%d))[%d] = %d\n", i, j, (*(p+i))[j]);
    printf("*(*(p+%d)+%d) = %d\n", i, j, *(*(p+i)+j));

    return 0;
}
