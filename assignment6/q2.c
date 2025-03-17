#include <stdio.h>
#include <stdint.h>

int swapEndian(int num) {
    return (num >> 8) | (num << 8);
}

int main() {
   int little_endian_num, big_endian_num;
    
    printf("Enter a 16-bit integer (in hexadecimal, e.g., 0x1234): ");
    scanf("%hx", &little_endian_num);
    
    big_endian_num = swapEndian(little_endian_num);
    
    printf("Little-endian: 0x%04X\n", little_endian_num);
    printf("Big-endian (Network order): 0x%04X\n", big_endian_num);
    
    return 0;
}
