#include <stdio.h>

int main(){
	struct book {
		char title[50];
		char author[50];
		char ISBN[50];
		char publisher[50];
	};
	
	struct book c;
	printf("Enter book title: ");
	scanf("%s",&c.title);
	printf("Enter book Author: ");
	scanf("%s",&c.author);
	printf("Enter book ISBN: ");
	scanf("%s",&c.ISBN);
	printf("Enter book Publisher: ");
	scanf("%s",&c.publisher);
	
}
