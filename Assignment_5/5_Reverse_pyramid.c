#include<stdio.h>
void main()
{
	int n=5;
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=n-i-1;j>=0;j--)
		{
			printf("* ");
		}
		for(k=n-i;k<n;k++)
		{
			printf(" ");
		}
		printf("\n");
	}
}
