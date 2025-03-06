
extern int flag;

int div(int num1, int num2)
{
    if(flag != 0)
        return 0;
    else
        return num1 / num2;
}