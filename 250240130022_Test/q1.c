//Q1.Display a non-negative interger number in the style of seven segment digital display.
//make function top,middle and bottom

#include <stdio.h>

//top patterns display 0 to 9
const char *top[] = {

    " _ ", "   ", " _ ", " _ ", "   ", " _ ", " _  ", " _ ", " _ ", " _ " //0123456789
};

//middle patterns display 0 to 9
const char *middle[] = {
    "| |", " | ", " _|", " _|", "|_|", "|_ ", "|_ ", " |", "|_|", "|_|"

};

//bottom patterns display 0 to 9
const char *bottom[] = {

    "|_|", " | ", "|_ ", " _|", "  |", " _|", "|_|", "  |", "|_|", " _|"

};

//function for top 
void displaytop(const char *number){ //const char pointer take *number
    for(int i = 0; i < number[i] != '\0';i++){
        printf("%s ", top[number[i] - '0']);
    }
    printf("\n"); //allways print the new line
}

//function for middle 
void displaymiddle(const char *number){
    for(int i = 0; number[i] != '\0';i++){
        printf("%s", middle[number[i] - '0']);
    }
    printf("\n");//allways print the new line

}

//function for bottom
void displaybottom(const char *number){
    for (int i = 0; i < number[i] != '\0';i++){ 
        printf("%s", middle[number[i] - '0']);
    }
    printf("\n");//allways print the new line
}

int main(){

    char number[30]; //declear the char variable number through
    printf("Enter the number Here...");//
    scanf("%s", number);//take the input form user through

    displaytop(number); // call the top function
    displaymiddle(number);// call the middle function
    displaybottom(number); // call the bottom function

    return 0;
}