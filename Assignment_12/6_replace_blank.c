#include<stdio.h>

void main()
{
	char str[100];
	printf("enter given string:");
	fgets(str,sizeof(str),stdin);
	printf("%s",str);
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		 str[i]='@';
		i++;
	}
	printf("updated string is %s",str);
}