#include <stdio.h>

void swap(int *num1, int *num2);
int main(){
	int a,b;
	
	printf("\t\tA Program to swap two values using pointers\n");
	printf("Enter two integers: ");
	scanf("%d%d",&a,&b);
	
	swap(&a,&b);
	
	printf("Swapped Values: %d %d\n",a,b);
	
	return 0;	
}

void swap(int *num1, int *num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
