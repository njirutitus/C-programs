#include<stdio.h>

int main(){
	int i;
	for(i=10;i>0;i=i-2){
		if (i == 3) continue;
		printf("%d\n",i);
	}
	
	return 0;
}
