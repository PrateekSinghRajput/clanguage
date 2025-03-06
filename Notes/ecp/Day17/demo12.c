#include<stdio.h>

float add(float num1, float num2);

// type declaration off function pointer
typedef float (*funptr_t)(float, float);

int main(void)
{  
    funptr_t ptr = add;
    funptr_t arr[3] = {add};

    printf("sum= %f\n", ptr(3.14f, 1.0f));
    pritnf("sum = %f\n", arr[0](3.14f, 1.0f));

    return 0;
}

float add(float num1, float num2)
{
    return num1 + num2;
}