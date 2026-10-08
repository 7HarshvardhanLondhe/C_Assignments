#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="Yugveer";
	char str2[100];
	int n=strlen(str1);
	
	strcpy(str2,str1);
	
	char temp = str2[0];
    str2[0] = str2[n - 1];
    str2[n - 1] = temp;

    printf("%s", str2);
}