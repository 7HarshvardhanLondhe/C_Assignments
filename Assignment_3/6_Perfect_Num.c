#include<stdio.h>
void main()
{
	int n=6;//28..15
	int sum = 0,i;
    for(i= 1; i < n; i++) 
	{
        if (n % i == 0) {
            sum += i;
        }
    }
    if(n==sum)
     printf("%d is Perfect number",n);
    else
     printf("Not an perfect number");
}
