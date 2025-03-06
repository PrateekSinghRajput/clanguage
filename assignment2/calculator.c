#include <stdio.h>

void add(float a, float b){
printf("Result: %f\n", a+b);
} 

void sub(float a, float b){
printf("Result: %f\n",a-b);
}

void mul(float a, float b){
printf("Result: %f\n ", a*b);
}

void div(float a, float b){

if (b!=0)
printf("Result: %f\n", a/b);
else
printf("Error: Division by Zero\n");
}


int main(){

int choice;
float num1, num2;

while (1) {
printf("Chose operation : \n1. Add\n2.. Sub\n3. Mul\n4.  div\n5. exit:");
scanf("%d", &choice);

if (choice == 5){
printf("Exiting Code.......");
break;
}

printf("Enter Two Number");
scanf("%f %f", &num1, &num2);

switch (choice){

       case 1: 
       add(num1,num2);
       break;
       
       case 2:
       sub(num1, num2);
       break;
       
       case 3:
       mul(num1, num2);
       break;
       
       case 4:
       div(num1, num2);
       break;
       
       default:
        printf("invalid choice!\n");
        
        }
        }
        
        return 0;
        
        }
