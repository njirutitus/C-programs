#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
	//variable declaration
	int a,b,c;
	float x1,x2;
	char ch;
	
	//capture user Input
	printf("\tProgram to solve Quadratic Equation\n");
	do{
		printf("Enter a,b,c: ");
		scanf("%d%d%d",&a,&b,&c);
		
		//Computations
		if((b*b-4*a*c)<0){
			printf("The equation has no roots");
			return 0;
		}
		else if((b*b-4*a*c)==0){
			x1 = x2 = -b/(2*a);
		}
		else{
			x1 = (float)(-b+sqrt(b*b-4*a*c))/(2*a);
			x2 = (float)(-b-sqrt(b*b-4*a*c))/(2*a);
		}
		
		//Output
		printf("The roots of the Quadratic Equation %dX2+%dx+%d=0 is \n",a,b,c);
		printf("X1: %f\n X2: %f\n",x1,x2);
		printf("press any key to continue or E to exit: \n");
		ch = getch();
	}while(ch!='E' && ch!='e');
	
	return 0;
	
}
