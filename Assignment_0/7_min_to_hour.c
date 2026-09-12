#include<stdio.h>
void main()
{
	int min=500;
	int hour=min/60;
	int rem=min%60;
	printf("Given %d minutes in %d hour and %d minutes",min,hour,rem);
}
