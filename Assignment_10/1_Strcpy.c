#include<stdio.h>
#include<string.h>
char* mystrcpy(char* str,char* str2)
{
	int i=0;
	while(str[i]!='\0')
	{
		str2[i]=str[i];
		i++;	
	}
	str2[i]='\0';
	return str2;	
}
void main()
{
	char str[]="harsh";
	char str2[10];
	mystrcpy(str,str2);
	printf("%s",str2);
}