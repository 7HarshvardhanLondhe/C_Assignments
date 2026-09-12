#include<stdio.h>
void main()
{
	int n=4;
	int i,j;
	int a=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
}
