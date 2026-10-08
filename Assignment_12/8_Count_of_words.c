#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("Enter given string:");
	fgets(str,sizeof(str),stdin);
	
	printf("\n%s",str);
	
	int count=0;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]==' ')
		 count++;
	}
	printf("Number or words in string are %d",count+1);
}