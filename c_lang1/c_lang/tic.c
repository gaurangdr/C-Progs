#include<stdio.h>
int main()
{
	int i,j,k1,k2=0,left=2,right=10,k=8,a[10]={0},b[10]={0},m=0;
	j=right-1;
	while(j)
	{
		for(i=left+1;i<j;i++)
		{
			k1=i^j;
			printf(" %d xor %d : %d\n",i,j,k1);
			if(k1>=k2 && k1<k )
			{
				a[m]=i;
				b[m++]=j;
				k2=k1;
			}
		}
		j--;
	}
	while(m--)
	{
		printf("%d xor %d = %d\n",a[m],b[m],k2);
	}
	return 0;
}
