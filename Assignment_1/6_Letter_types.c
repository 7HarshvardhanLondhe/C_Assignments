#include<stdio.h>
void main()
{
	char ch='#';
	if(ch >= 'a' && ch < 'z')
	{
		printf("character is lowercase");
	}
	else if(ch >= 'A' && ch < 'Z'){
		printf("charater is Uppercase");
	}
	else if(ch >= '0' && ch < "9")
	{
		printf("character is DIGIT");
	}
	else {
		printf("character is special symbol");
	}
}
