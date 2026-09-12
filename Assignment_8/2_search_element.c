#include<stdio.h>
void main()
{
	int arr[]={10,20,2,23,7,1,32};
	int n=sizeof(arr)/sizeof(int);
	int num=23;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==num)
		 printf("element found at index %d",i);
	}
}