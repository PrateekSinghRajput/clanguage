#include<stdio.h>

// 3. Compilation steps

enum options{
    EXIT, ADD, SUB, MUL, DIV
};

typedef enum options opt_t;

opt_t menu_list(void);
float add(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);
float input_number(void);
void print_result(float);

int main(void)
{
    opt_t ch;
    float res, num1, num2;

    while((ch = menu_list()) != EXIT)
    {
        num1 = input_number();
        num2 = input_number();

        switch(ch)
        {
            case ADD:
                res = add(num1, num2);
                break;
            case SUB:
                res = sub(num1, num2);
                break;
            case MUL:
                res = mul(num1, num2);
                break;
            case DIV:
                if(num2 != 0)
                    res = div(num1, num2);
                else
                    goto END;
                break;
            case EXIT:
                break;
        }
        print_result(res);
END:
    printf("Divide by zero error\n");
    }


    return 0;
}

opt_t menu_list(void)
{
    opt_t choice;
    printf("0.Exit\n1. Add\n2. Sub\n3. Mul\n4. Div\n");
    printf("Enter choice : ");
    scanf("%d", &choice);
    return choice;
}

float add(float num1, float num2)
{
    return num1 + num2;
}

float sub(float num1, float num2)
{
    return num1 - num2;
}

float mul(float num1, float num2)
{
    return num1 * num2;
}

float div(float num1, float num2)
{
    return num1 / num2;
}

float input_number(void)
{
    float num;
    printf("Enter float number : ");
    scanf("%f", &num);
    return num;
}

void print_result(float result)
{
    printf("Result = %f\n", result);
}