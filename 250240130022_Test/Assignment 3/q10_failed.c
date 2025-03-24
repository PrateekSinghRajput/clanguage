// This is a very time consuming approach is abandoned 



#include <stdio.h>

int days_passed(int);
int main(){

	int r_d = 1, r_m = 1, r_y = 1970;						// reference day month year
	int d, m, y;
	int total_days = 0;									// target date
	int month_days[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; 	
	if(y%4==0){
		month_days[1] = 29;
	}					
	printf("Enter date in the format dd mm yyyy\n");
	scanf("%d %d %d", &d, &m, &y);
	if(d==0 || m==0 || y==0){
		printf("\nYou have entered a zero value, please try again\n");
		return -1;
	}
	//printf("\n%d\n", days_passed(y));
	
	
	for(int i = 0; i<m-1; i++){
		total_days += month_days[i];
	}
	total_days += d-1;
	
	printf("\n%d days have elapsed since %d/%d/%d\n", days_passed(y)+total_days, r_d, r_m, r_y);
	
	switch(total_days%7){
	
		case 0:
			printf("This day is a Thursday\n");
			break;
		case 1:
			printf("This day is a Friday\n");
			break;
		case 2:
			printf("This day is a Saturday\n");
			break;
		case 3:
			printf("This day is a Sunday\n");
			break;
		case 4:
			printf("This day is a Monday\n");
			break;
		case 5:
			printf("This day is a Tuesday\n");
			break;
		case 6:
			printf("This day is a Wednesday\n");
			break;
		
			
	}
	
} 

int days_passed(int y){
	int r_d = 1, r_m = 1, r_y = 1970;
	int c_y = (y-1) - (r_y-1);    				// completed years = y-1 - r_y-1
	//printf("\ncompleted years = %d\n", c_y);					
	int days = ((c_y/4) * (366 + 365*3)); 			// days = ((completed years/4) * (366 + 365*3)) basically we are subtracting groups of four years
	//printf("\ndays = %d\n", days);
	int rem_y = c_y%4;
	//printf("\nremaining years = %d\n", c_y);
	if(y == r_y){
		days = 0;
	}
	else if(rem_y == 1){
		days+=365;
	}
	else if(rem_y == 2){
		days+=365+365;
	}																									
	else{
		days = 365+365+366;
	}	
	
	return days;
	
}

