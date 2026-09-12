#include<stdio.h>
void main()
{
	int arr[5]= {1,2, 3, 4,5};
	int brr[5]={10,20,30, 40, 50};
	int n=sizeof(arr)/sizeof(int);
	int crr[5];
	for(int i=0;i<n;i++)
	{
		crr[i]=arr[i]+brr[i];
	}
	for(int i=0;i<n;i++)
	 printf("%d\t",crr[i]);
}