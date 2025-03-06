#include <stdio.h>
int main() {
    // -5 = ~5 + 1 = ~(0000 0000 0000 0101) + 1 = 1111 1111 1111 1010 + 1 = 1111 1111 1111 1011
    short num1 = -5;                // 1111 1111 1111 1011
    short num2 = 65531;             // 1111 1111 1111 1011 
    unsigned short num3 = 65531;    // 1111 1111 1111 1011
    unsigned short num4 = -5;       // 1111 1111 1111 1011
    printf("num1 = %hd, %hu, %hx, %ho\n", num1, num1, num1, num1);
    printf("num2 = %hd, %hu, %hx, %ho\n", num2, num2, num2, num2);
    printf("num3 = %hd, %hu, %hx, %ho\n", num3, num3, num3, num3);
    printf("num4 = %hd, %hu, %hx, %ho\n", num4, num4, num4, num4);
    // %h? -- half int -- short int -- 16 bits
    // %hd -- d -- decimal -- number can be +ve (msb=0) or -ve (msb=1 -- 2's complement)
    // %hu -- u -- unsigned -- interpret all bits as data bits (no sign)
    // %hx -- x -- hexa-decimal
    // %ho -- o -- octal
    return 0;
}

/*
STACK -- FAR of main()

--------------
argc
--------------
argv
--------------
envp
-------------- <-- BP (to access formal args & local vars)
num1            --- -2 (bp)
--------------
num2            --- -4 (bp)
--------------
num3            --- -6 (bp)
--------------
num4            --- -8 (bp)
--------------
...
--------------
return address
-------------- <--- SP
*/

/*
8085/86     <-- 16-bit arch
    - CPU regrs: ax, bx, cx, dx, si, di, sp, bp, ip, ...
80386       <-- 32-bit arch
    - CPU regrs: eax, ebx, ecx, edx, esi, edi, esp, ebp, eip, ...
Itanium     <-- 64-bit arch
    - CPU regrs: rax, rbx, rcx, rdx, rsi, rdi, rsp, rbp, rip, ...
*/
