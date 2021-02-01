#include <stdio.h>

int main(){
	int n,m,sum;
	int diff;
	
	printf("Enter two numbers: ");
	scanf("%d%d",&n,&m);
	
	sum = n+m;
	diff = n-m;
	printf("%d+%d=%d\n",n,m,sum);
	printf("%d-%d=%d",n,m,diff);
	
	return 0;
}
