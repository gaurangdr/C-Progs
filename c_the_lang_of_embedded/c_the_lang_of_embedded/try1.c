#include<stdio.h>
int main()
{
	int **p;
	p=(int **)malloc(sizeof(int *)*3);
	*p=(int *) malloc(sizeof(int)*2);
	**p=11;
	*(*p+1)=22;
	printf("%d\n%d\n",**p,*(*p+1));

	*(p+1)="India";
	*(p+2)=(int *)malloc(sizeof(int));
	
	return 0;
}
