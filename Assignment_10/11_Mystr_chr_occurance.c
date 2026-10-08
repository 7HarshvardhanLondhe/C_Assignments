#include<stdio.h>

char* mystrchr(char* str, char ch)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			return &str[i];
		i++;
	}
	return NULL;
}

void main()
{
	char str[]="harshvardhan";
	char *result=mystrchr(str, 'a');
	
	if(result != NULL)
	 printf("Character found= %s",result);
	else{
		printf("not found");	
	}
}