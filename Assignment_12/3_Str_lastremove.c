#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="ram";
	int n=strlen(str);
	for(int i=0;i<n-1;i++)
	{
		printf("%c",str[i]);
	}
}