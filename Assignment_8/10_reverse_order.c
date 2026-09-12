#include<stdio.h>
void main()
{
	int arr[5]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(int);
	printf("Reverse order:");
	for(int i=n-1;i>=0;i--)
		printf("\t%d",arr[i]);
}