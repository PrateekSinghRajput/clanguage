#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    return 0;
}

int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year))
        return 29;
    return daysInMonth[month - 1];
}

int countDays(int day, int month, int year) {
    if (year < 1970)
        return 0; 
    if (year == 1970 && month == 1 && day == 1)
        return 0; 
    
    if (month == 1) {
        return 365 * (year - 1970) + (year - 1969) / 4 - (year - 1901) / 100 + (year - 1601) / 400 + countDays(day, 2, 1969);
    }
    return countDays(1, month - 1, year) + getDaysInMonth(month - 1, year) + (day - 1);
}

const char* getDayOfWeek(int day, int month, int year) {
    const char* daysOfWeek[] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
    int totalDays = countDays(day, month, year);
    return daysOfWeek[totalDays % 7];
}

int main() {
    int day, month, year;
    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);
    
    printf("The day of the week is: %s\n", getDayOfWeek(day, month, year));
    return 0;
}