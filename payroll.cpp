#include<stdio.h>
int main(){
	
	//variable declaration
	char name[50], kra[20], empno[20];
	int hours;
	double normal, overtime, tax, net;
	
	//Read User Input
	printf("\t\t\tPayroll system\n");
	printf("Employee Details\n");
	printf("Name: ");
	scanf("%s",&name);
	printf("KRA pin: ");
	scanf("%s", &kra);
	printf("Employment NO: ");
	scanf("%s",&empno);
	printf("Hours worked: ");
	scanf("%d",&hours);
	
	//Computations
	if (hours > 40) {
		normal = 40*1000.0;
		overtime = 1.5*1000*(hours-40);
	}
	else {
		normal = (double)hours*1000;
		overtime = 0;
	}
	
	tax = 0.3 * (normal + overtime);
	net = normal+overtime - tax;
	
	//Output
	printf("Normal Pay: %lf\n",normal);
	printf("Overtime Pay: %lf\n", overtime);
	printf("Tax Paid: %lf\n",tax);
	printf("Net Income: %lf\n",net);
	
	
	
	return 0;
}
