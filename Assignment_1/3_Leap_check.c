#include<stdio.h>
void main(){
	int n=2020;
	if(n%4 == 0 && n % 100 !=0 || n%400==0)
	{
		printf("given %d year is leap",n);
	}
	else
	printf("given %d is Not Leap Year",n);
}
