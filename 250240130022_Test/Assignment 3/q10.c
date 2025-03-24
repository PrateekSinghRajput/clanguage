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
	if(d==0 || m==0 || y==0 || y<r_y){
		printf("\nYou have entered incorrect value, please try again\n");
		return -1;
	}
	
	for(int i=1970; i<y; i++){
		if(i%4==0){
			total_days += 366;
		}
		else{
			total_days += 365;
		}
	}
	
	for(int i = 0; i<m-1; i++){
		total_days += month_days[i];
	}
	
	total_days += d-1;
	
	printf("\n%d\n", total_days);
	
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
