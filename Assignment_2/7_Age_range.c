#include<stdio.h>
void main()
{
	int age=20;
	if(age<12)
	 printf("%d Age in group Child",age);
	else if(age<20 && age>=12)
	 printf("%d Age in group Teenager",age);
	else if(age>=20 && age<59)
	 printf("%d Age in group Adult",age);
	else
	 printf("%d Age in group Senior citizen",age);
}
