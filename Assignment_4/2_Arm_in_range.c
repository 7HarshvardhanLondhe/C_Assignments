#include<stdio.h>
void main()
{
	int n=500;
	for(int i=10;i<=n;i++)
	{
		int n=i;
		int sum=0;
		int temp=n;
		while(n>0)
		{
			sum=sum+(n%10)*(n%10)*(n%10);
			n=n/10;
		}
			if(temp==sum)
		{
		printf("%d ",temp);
		}
	}
}