#include<stdio.h>
void main()
{
	int arr[]={10,20,2,23,7,1,32,33};
	int n=sizeof(arr)/sizeof(int);
	printf("alternate nums are:");
	for(int i=0;i<n;i++)
	{
	  if(i%2==0)
	   	printf("%d\t",arr[i]);
	}
}