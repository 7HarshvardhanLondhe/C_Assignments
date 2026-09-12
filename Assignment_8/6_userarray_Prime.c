#include<stdio.h>

void main()
{
    int arr[5];
    printf("Enter array elements: ");
    int n = sizeof(arr) / sizeof(int);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Prime numbers are: ");
    for(int i=0; i<n; i++)
    {
        int flag = 0;
        for(int j=2; j<arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("%d ", arr[i]);
    }
}