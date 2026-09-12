#include<stdio.h>
void main()
{
	int n=99,i;
	int flag=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	 printf("given %d number is prime");
	else
	 printf("not prime");
	
}
