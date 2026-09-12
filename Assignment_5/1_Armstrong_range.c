#include<stdio.h>
void main()
{
	int i,sum=0,temp;
	for(i=101;i<=199;i++)
	{
		temp=i;
		sum=sum+((temp%10)*(temp%10)*(temp%10));
		temp=temp/10;
	}
	printf("%d",i);
}
