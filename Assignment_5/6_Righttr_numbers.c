#include<stdio.h>
void main()
{
	int n=5;
	int i,j;
	for(i=0;i<n;i++)
	{
		int a=1;
		for(j=0;j<=i;j++)
		{
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
}
//1
//12
//123
//1234
//12345
