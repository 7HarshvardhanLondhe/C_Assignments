#include<stdio.h>
void main()
{
	int n=6;
	int fact=1;
	while(n>0)
	{
		fact=fact*n;
		n--;
	}
	printf("factorial=%d",fact);
}
