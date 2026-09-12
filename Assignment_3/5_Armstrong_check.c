#include<stdio.h>
void main()
{
	int n=153;
	int sum=0;
	int temp=n;
	while(n>0)
	{
		sum=sum+(n%10)*(n%10)*(n%10);
		n=n/10;
	}
	if(sum==temp)
	 printf("Armstrong number");
	else
	 printf("Not Armstrong number");
}
