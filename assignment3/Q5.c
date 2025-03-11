#include <stdio.h>

int timeToSeconds(int hh, int mm, int ss) {
    if (hh == 0 && mm == 0) 
        return ss;
    if (mm == 0) 
        return timeToSeconds(hh - 1, 59, ss) + 3600;
    return timeToSeconds(hh, mm - 1, ss) + 60;
}

void secondsToTime(int totalSeconds, int *hh, int *mm, int *ss) {
    if (totalSeconds < 60) {
        *ss = totalSeconds;
        return;
    }
    if (totalSeconds >= 3600) {
        (*hh)++;
        secondsToTime(totalSeconds - 3600, hh, mm, ss);
    } else {
        (*mm)++;
        secondsToTime(totalSeconds - 60, hh, mm, ss);
    }
}

int main() {
    int hh, mm, ss, totalSeconds;
    
    printf("Enter time (hh mm ss): ");
    scanf("%d %d %d", &hh, &mm, &ss);
    totalSeconds = timeToSeconds(hh, mm, ss);
    printf("Total seconds: %d\n", totalSeconds);
    
    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);
    hh = mm = ss = 0;
    secondsToTime(totalSeconds, &hh, &mm, &ss);
    printf("Time in hh:mm:ss format: %d:%d:%d\n", hh, mm, ss);
    
    return 0;
}