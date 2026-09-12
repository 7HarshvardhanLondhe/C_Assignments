#include<stdio.h>
void main()
{
	int arr[]={10,20,2,23,7,1,32};
	int n=sizeof(arr)/sizeof(int);
	int sum=0;
	for(int i=0;i<n;i++)
	{
	  sum+=arr[i];	
	}
	printf("sum of elements is %d",sum);
}