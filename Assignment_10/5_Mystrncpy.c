#include<stdio.h>
#include<string.h>
void mystrncpy(char* str1,char* str2,int n)
{
	int i=0;
	
	while(i<n && str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;			
	}
	str2[i]='\0';
	printf("Copied string is %s",str2);
}
void main()
{
	char str1[]="harsh";
	char str2[100];
	mystrncpy(str1,str2,3);
}