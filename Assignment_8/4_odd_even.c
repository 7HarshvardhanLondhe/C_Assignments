#include<stdio.h>
void main()
{
    int arr[]={10,20,2,23,7,1,32};
    int n=sizeof(arr)/sizeof(int);
    int i;

    printf("Even numbers are:\n");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            printf("%d ",arr[i]);
    }
    printf("\nOdd numbers are:\n");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
            printf("%d ",arr[i]);
	}
}