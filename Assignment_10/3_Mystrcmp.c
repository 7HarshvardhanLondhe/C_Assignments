#include<stdio.h>
#include<string.h>
int mystrcmp(char* str1,char* str2)
{
	int i=0;
	while(str1[i]!='\0' || str2[i]!='\0')//not exit with 1 null only::||opr=all loop ghumega
	{
		if(str1[i]>str2[i])
		 return 1;
		else if(str1[i]<str2[i])
		 return -1;
		 
		i++;
	}
	return 0;
	
}
void main()
{
	char str1[]="apple";
	char str2[]="apples";
	int res=mystrcmp(str1,str2);
	if(res==0)
	 printf("Same");
	else if(res==1)
	 printf("Str1 is greater");
	else
	 printf("Str2 is greater");
}