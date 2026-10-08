#include<stdio.h>

void mystrrev(char* str)
{
	int i=0;
	int j=0;
	char temp;
	while(str[j]!='\0')
	{
		j++;
	}
	j--;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		
		i++;
		j--;	
	}
	printf("Reverse string = %s", str);
}
void main()
{
	char str[]="harsh";
	mystrrev(str);
}