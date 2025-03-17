#include <stdio.h>

int main() {
    unsigned int num = 0;
    char *byte = (char *)&num;

    if (*byte) {
        printf("Little Endian\n");
    } else {
        printf("Big Endian\n");
    }

    return 0;
}
