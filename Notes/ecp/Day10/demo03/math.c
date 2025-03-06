
int factorial(int num)
{
    int fact = 1;
    int i;
    for(i = 1 ; i <= num ; i++)
        fact *= i;
    return fact;
}
int power(int b, int in)
{
    int p = 1;
    int i;
    for(i = 1 ; i <= in ; i++)
        p *= b;
    return p;

}