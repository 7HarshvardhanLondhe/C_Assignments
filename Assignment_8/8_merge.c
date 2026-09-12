#include<stdio.h>
void main()
{
	int arr[5]= {1,2, 3, 4,5};
	int brr[5]={10,20,30, 40, 50};
	int crr[10];
	int n=sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++)//first 1 to 5
	{
		crr[i]=arr[i];
	}
	for(int i=0;i<n;i++)//crr[i+n]
	{
		crr[i+n]=brr[i];
	}
	for(int i=0;i<10;i++)
	 printf("%d\t",crr[i]);
}