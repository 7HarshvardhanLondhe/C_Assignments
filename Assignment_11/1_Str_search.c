#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	printf("enter string:");
	scanf("%s",&str);
	printf("%s",str);

	int n=strlen(str);
	printf("%d",n);
	char ch;
	printf("\nenter single char to check its there or not: ");
	scanf("\n%s",&ch);
	for(int i=0;i<n;i++)
	{
		if(str[i]==ch)
		 printf("element found at index %d",i);
	}
}