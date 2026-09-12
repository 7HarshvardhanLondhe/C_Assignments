#include<stdio.h>
void mystrcat(char* str1,char* str2,int n)
{
	int i=0;
	
	while(str2[i]!='\0')
	{
		str1[i+n]=str2[i];
		i++;			
	}
	printf("Concat string is %s",str1);
}
void main()
{
	char str1[]="harsh";
	char str2[]="vardhan";
	int n=strlen(str1);
	mystrcat(str1,str2,n);
}