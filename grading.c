//grading program
#include<stdio.h>

int input();
int moderate(int cw, int ex);
char grading(int mark);

int main(){
	int cw,ex,total;
	char grade;
	
	printf("\t\tGrading System\n");
	printf("Enter course work(0-50): ");
	cw = input();
	printf("\nEnter Exam mark(0-50): ");
	ex = input();
	total = moderate(cw,ex);
	printf("Coursework Grade: %c\n",grading(cw*2));
	printf("Exam Grade: %c\n",grading(ex*2));
	printf("Final mark: %d\n",total);
	printf("Final Grade: %c\n",grading(total));
	if(total>=40) printf("Comment: Passed\n");
	else if(total==39) printf("Comment: Technical fail\n");
	else printf("Comment: Failed\n");
	
	return 0;
	
}

int input(){
	int value;
	do{
		scanf("%d",&value);
		if(value<0 || value>50){
			printf("Out of range(0-50), try again: ");
		}
	} while(value<0 || value>50);
	
	return value;
}

int moderate(int cw, int ex){
	int total = cw  + ex;
	if(total == 39) total = 40;
	else if(total>=40){
		if(cw<15 || ex<15) total = 39;
	}
	
	return total;
}

char grading(int mark){
	char grade;
	if(mark>=70) grade = 'A';
	else if(mark>=60) grade = 'B';
	else if(mark>=50) grade = 'C';
	else if(mark>=40) grade = 'D';
	else grade = 'F';
	
	return grade;
}
