#include <stdio.h>


float cal(float income, char gender, int age){

float tax=0;
float taxincome = income;

if (taxincome <= 250000){
tax =0;
}

else if (taxincome <= 500000){
tax = (taxincome -250000) *0.05;
}

else if (taxincome <= 1000000){
tax = (250000 * 0.05) + (taxincome - 500000) * 0.2;
}

else{
tax = (250000 * 0.05) + (500000 * 0.2) + (taxincome - 1000000) * 0.3;

}

if (age>= 60){
tax *= 0.9;
}

if (gender =='F'){
tax *= 0.95;
}
else {
tax = tax;

}

return tax;

}


int main(){

float income, tax;
char gender;
int age;


printf("Enter your income:  ");
scanf("%f", &income);

printf("Enter your Gender (M/F) ");
scanf("%c", &gender);


printf("Enter your Age ");
scanf("%d", &age);

tax = cal(income, gender, age);
printf("your total income tax is: %f\n", tax);

return 0;

}
