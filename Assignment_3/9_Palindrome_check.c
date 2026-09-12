#include<stdio.h>
void main()
{
	int n=153,rev=0;
	int temp=n;
	while(n>0)
	{
		rev=rev * 10 + n%10;
		n=n/10;
	}
	if(temp==rev)
	 printf("Palindrome");
	else
	 printf("Not Palindrome");
}
