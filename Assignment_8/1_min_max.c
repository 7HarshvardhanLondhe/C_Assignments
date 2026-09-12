#include<stdio.h>
void main()
{
	int arr[]={10,20,2,23,7,1,32};
	int max=arr[0],min=arr[0];
	int n=sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		 max=arr[i];
		if(arr[i]<min)
		 min=arr[i];
	}
	printf("Max=%d Min=%d",max,min);
}