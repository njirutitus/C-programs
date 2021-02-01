#include<stdio.h>
#include<string.h>

int main(){
	char choice[5];
	printf("Enter your choice: ");
	scanf("%s",&choice);
	
	if(strcmp(choice,"Oo") == 0){
		printf("I love orange\n");
	}
	else if(strcmp(choice,"Aa") == 0){
		printf("My best fruit is apple\n");
	}
	else if(strcmp(choice,"Bb") == 0){
		printf("Bananas are sweet\n");
	}
	else {
		printf("I don\'t know the table\n");
	}
	
	return 0;
}
