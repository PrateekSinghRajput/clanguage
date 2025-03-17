#include <stdio.h>
#include <stdint.h>

uint32_t swap_endian(uint32_t value) {
    return ((value >> 24) & 0x000000FF) | 
           ((value >> 8)  & 0x0000FF00) | 
           ((value << 8)  & 0x00FF0000) | 
           ((value << 24) & 0xFF000000);
}

int main() {
    uint32_t num = 0x12345678;
    printf("Original (Little-Endian assumed): 0x%X\n", num);
    
    uint32_t converted = swap_endian(num);
    printf("Converted (Big-Endian): 0x%X\n", converted);
    
    uint32_t reverted = swap_endian(converted);
    printf("Reverted (Should match original): 0x%X\n", reverted);
    
    return 0;
}