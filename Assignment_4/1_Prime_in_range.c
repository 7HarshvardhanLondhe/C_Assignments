#include<stdio.h>
void main()
{
	int n=100;
	int count=0;
	for(int i=2;i<=n;i++)
	{
		int x=i;
		int flag=0;
		for(int j=2;j<x;j++)
		{
			if(x%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			count++;
			printf("%d ",x);
		}
	}	
	printf("\ntotal prime nums are=%d\n",count);
	 
}