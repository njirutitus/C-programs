#include<stdio.h>
#include<conio.h>

int main(){
	char ch;
	
	do{
		printf("Hello\n");
		printf("press E to exit: \n");
		ch = getch();
	}while(ch!='E' && ch!='e');
	
	return 0;
}
