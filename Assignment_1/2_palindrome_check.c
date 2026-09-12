#include<stdio.h>
void main()
{
	int n=213;
	int rev=0;
	while(n>0)
	{
		rev=rev* 10 + n%10;
		n=n/10;
	}
	printf("rev is %d",rev);
}
