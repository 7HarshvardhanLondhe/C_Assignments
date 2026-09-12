#include<stdio.h>
void main()
{
	int n=254789321;
	int last=n%10;
	int first;
	while(n>0)
	{
		first=n%10;
		n=n/10;	
	}
	printf("first: %d Last: %d\n",first,last);
	printf("result: %d",first+last);
}
