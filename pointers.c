//Demonstration of how pointers
#include<stdio.h>

void swap(int *x, int *y);
void swap1(int x, int y);

int main(){
		
	//Two dimension arrays
	int mark[2][2][5];
	int f,g,h;
	int *p;
	for(f=0;f<2;f++){
		for(g=0;g<2;g++){
			for(h=0;h<5;h++){
				printf("\nEnter mark for student %d in stream %d ",h,g);
				scanf("%d",&mark[f][g][h]);
			}
		}
	}
	
	p = mark;
	p +=9;
	
	printf("%d\n",*p);
	
	return 0;
	
}
void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void swap1(int x, int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}
