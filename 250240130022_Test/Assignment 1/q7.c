#include <stdio.h>

int main(){
char x;
scanf("%c", &x);

if(x=='a' || x=='A' || x=='e' || x=='E' || x=='i' || x=='I' || x=='o' || x=='O' || x=='u' || x=='U'){

printf("\n%c is a vowel\n", x);

}
else{

printf("\n%c is not a vowel\n", x);
}


}
