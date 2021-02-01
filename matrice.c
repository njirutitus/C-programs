#include<stdio.h>

int main(){
	int a[3][2], b[3][2],sum[3][2],i,j,n,m;
	
	//Program title
	printf("\t\tA program to sum two matrices\n");
	
	//First matrix
	printf("First Matrice\n");
	for(i=0;i<3;i++){
		n= i+1;
		for(j=0;j<2;j++){
			m=j+1;
			printf("Enter value row %d colum %d: ",n,m);
			scanf("%d",&a[i][j]);
		}
	}
	
	//Second matrix
	printf("Second Matrice\n");
	for(i=0;i<3;i++){
		n= i+1;
		for(j=0;j<2;j++){
			m=j+1;
			printf("Enter value row %d colum %d:",n,m);
			scanf("%d",&b[i][j]);
		}
	}
	
	//Sum and output
	printf("The sum of the Matrices is\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			sum[i][j] = a[i][j]+b[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	
	return 0;
	
}
