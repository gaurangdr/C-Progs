#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter N: ");
	scanf("%d",&n);
//	printf("\n");
	for(i=0;i<n;i++)
	{	
		for(j=0;j<n-1-i;j++)
			printf(" ");
		for(j=0;j<=i;j++)
			printf("#");
		printf("\n");
	}
	return 0;
}
