#include<stdio.h>
#include<string.h>
void main()
{
	char ch[50];
	printf("enetr string: ");
	scanf("%s",ch);
	
	int i=0;
	while(ch[i]!='\0')
	{
		if(ch[i]=='a')
		 ch[i]='$';
		i++;	
	}
	printf("rep occurance string is %s",ch);
}
