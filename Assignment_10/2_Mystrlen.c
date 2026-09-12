#include<stdio.h>
#include<string.h>
int mystrlen(char* str)
{
	int i=0;
	int count=0;
	while(str[i]!='\0')
	{
		count++;
		i++;	
	}
	str[i]='\0';
	return count;	
}
void main()
{
	char str[]="harsh";
	int result=mystrlen(str);
	printf("%d",result);
}