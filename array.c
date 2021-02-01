//Array demonstration By Titus

#include <stdio.h>

int main(){
	//Array Declaration;
	int marks[2][3], *ptr;
	int i,j,n,m;
	
	float total=0, average = 0;
	
	//Array initialization using nested for loop
	for(j=0;j<2;j++)
	{
		m = j+1;
		for(i=0;i<3;i++){
			n = i+1;
			printf("Enter mark for Stream %d student %d: \n",m,n);
			scanf("%d",&marks[j][i]);
			total += marks[j][i];
		}	
	}
		
	//Assign the first element of the array to the pointer
	ptr = &marks[0][0];
	printf("You Entered: ");
	
	//Output array elements using pointers and for loop
	for(i=0;i<6;i++){
		printf("%d, ",*ptr);
		ptr++;
	}
	
	//calculate the average for all students
	average = total/6;
	printf("The average is: %f",average);
	
	return 0;
}
