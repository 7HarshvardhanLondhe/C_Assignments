#include<stdio.h>
void main()
{
	int n=145;
	int temp=n;
	int sum=0,fact,i;
	while(temp>0)
	{
		int digit=temp%10;
		fact=1;
		for(i=1;i<=digit;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		temp=temp/10;	
	}
	if(sum==n)
	 printf("Strong number");
	else
	 printf("Not a Strong number");
}
