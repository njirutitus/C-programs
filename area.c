#include<stdio.h>
#include<math.h>
#define _USE_MATH_DEFINES
int main(){
	double r,area, perimeter;
	printf("Enter radius: ");
	scanf("%lf",&r);
	perimeter = 2*M_PI*r;
	area = M_PI*r*r;
	printf("%0.4lf\n",M_PI);
	printf("area: %lf \nPerimeter: %f\n",area,perimeter);
	return 0;
}
