#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	printf("enter string:");
	scanf("%s",str);
	printf("%s",str);

	int n=strlen(str);
	printf("%d",n);
	char ch;int i=0;
	printf("\nenter single char to check its there or not: ");
	scanf("\n%c",&ch);
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		 printf("element found at index %d",i);
		
		i++;
	}
}