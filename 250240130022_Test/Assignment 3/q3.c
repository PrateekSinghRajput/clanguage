#include <stdio.h>

int main(){

	int k = 10, y = 10, q = 10;
	
	printf("\nDifference between post increment and pre increment:\nk=%d",k);	//k++ did not show increment because it will do so after the end of statement 												  while ++k incremented immediately
	printf("\nk++ = %d | ++k = %d", k++, ++k);				
	
	printf("\n\nDifference between post increment and pre increment with multiplication:\ny=%d",y);
	printf("\ny++*10 = %d | ++y*10 = %d", y++*10, ++y*10);
	
	printf("\n\nDifference between post increment and pre decrement with multiplication:\ny=%d",q);
	printf("\nq--/3 = %d | --q/3 = %d\n", q--/3, --q/3);

}
