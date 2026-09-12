#include<stdio.h>
void main()
{
	for(int i=1;i<=100;i++)
	{
		int sum=0;
		for(int j=1;j<=100;j++)
		{
			
			if(i%j==0 && j!=i)
			{
			sum=sum+j;	
			}
		}
		if(sum==i)
		 printf("Perfect nums are=%d ",i);
	}
}