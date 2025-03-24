#include <stdio.h>

int main(){
int marks;
scanf("%d", &marks);
if(marks>=0 && marks<=40){
printf("\nFail");
}
else if(marks>=41 && marks<=50){
printf("\nPass");
}
else if(marks>=51 && marks<=60){
printf("\nC grade");
}
else if(marks>=61 && marks<=70){
printf("\nB grade");
}
else if(marks>=71 && marks<=80){
printf("\nB+ grade");
}
else if(marks>=81 && marks<=85){
printf("\nA grade");
}
else if(marks>=86 && marks<=90){
printf("\nA+ grade");
}
else if(marks>=91 && marks<=95){
printf("\nO grade");
}
else if(marks>95){
printf("\nO+ grade");
}
else{
printf("\nSomething went wrong. Try again");
}
printf("\n");
return 0;
}
