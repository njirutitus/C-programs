//Grading system Program
#include<stdio.h>

int main(){
	//variable declaration
	int final_mark, course_work, exam_marks;
	char grade;
	
	//Capture input
	printf("\t Grading System\n");
	printf("Enter Course work: ");
	scanf("%d",&course_work);
	printf("Enter Exam marks: ");
	scanf("%d",&exam_marks);
	
	//Computations
	final_mark = course_work + exam_marks;
	if (final_mark>=40 && (course_work < 15 || exam_marks <15)) {
		final_mark = 39;
	}
	else if(final_mark==39){
		final_mark = 40;
	}
	
	if(final_mark>=70) grade = 'A';
	else if(final_mark>=60) grade = 'B';
	else if(final_mark>=50) grade = 'C';
	else if(final_mark>=40) grade = 'D';
	else grade = 'F';
	
	//Output
	printf("Final Mark: %d\n",final_mark);
	printf("Grade: %c\n",grade);
	
	//comment
	if(final_mark == 39) {
		printf("Comment: Technical Fail\n");
	}
	else if(final_mark < 39) {
		printf("Comment: Fail\n");
	}
	else {
		printf("Comment: Pass\n");
	}
	
	return 0;
}
