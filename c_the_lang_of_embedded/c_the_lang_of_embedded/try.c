#include<stdio.h>
#include<stdlib.h>
int* in(int ***p)
{
	*p=(int**)malloc(sizeof(int *)*2);
 	**p=(int *)"India";
	*(*p+1)=(int *)"Nepal";
	return;
}	
int main()
{
	int **p=NULL;
	in(&p);
	printf("%s\n",*(p+1));
	return 0;
}
