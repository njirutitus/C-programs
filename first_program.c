#include <stdio.h>

// Global variable
int rate = 1500;

int main(){
	int hours, gross_pay;
	
	hours = 20;
	gross_pay = rate * hours;
	
	printf("The gross pay is: %d", gross_pay);
	
	return 0;
}
