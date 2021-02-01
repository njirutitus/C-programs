#include <stdio.h>
int main(){
	int a,b,temp;
	
	printf("\t\tA Program to swap two values using pointers\n");
	printf("Enter two integers: ");
	scanf("%d%d",&a,&b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("Swapped Values: %d %d\n",a,b);
	
	return 0;	
}
