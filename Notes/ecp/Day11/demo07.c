#include<stdio.h>

void accept_marks(float [], int);
void print_marks(float [], int);
float array_max(float *, int);
float array_min(float *, int);
int search_array(float *, int, float);


int main(void)
{
    float marks[5];
    int index;

    accept_marks(marks, 5);
    print_marks(marks, 5);

    printf("max = %f\n", array_max(marks, 5));
    printf("min = %f\n", array_min(marks, 5));
    if((index = search_array(marks, 5, 56)) == 9999)
        printf("Key not found\n");
    else
        printf("Key is found at %d index\n", index);


    return 0;
}

void accept_marks(float ptr[], int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        printf("Enter marks of %d student : ", i+1);
        scanf("%f", &ptr[i]);    
    }
}
void print_marks(float ptr[], int size)
{
    printf("Marks of students : ");
    for(int i = 0 ; i < size; i++)
        printf("%-6.2f", ptr[i]);
    printf("\n");
}
float array_max(float *ptr, int size)
{
    float max = ptr[0];
    for(int i = 1 ; i < size ; i++)
        if(ptr[i] > max)
            max = ptr[i];
    return max;
}
float array_min(float *ptr, int size)
{
    float min = ptr[0];
    for(int i = 1 ; i < size ; i++)
        if(ptr[i] < min)
            min = ptr[i];
    return min;
}

int search_array(float *ptr, int size, float key)
{
    for(int i = 0 ; i < size ; i++)
        if(key == ptr[i])
            return i;
    return 9999;
}