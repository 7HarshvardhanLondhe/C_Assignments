#include<stdio.h>
void main()
{
	char ch='U';
	if((ch=='a' || ch == 'A') || (ch=='e' || ch == 'E') || (ch=='i' || ch == 'I') || (ch=='o' || ch == 'O')||(ch=='u' || ch == 'U'))
	{
		printf("given char %c is Vowel",ch);
	}
	else printf("given char %c is Consonent",ch);
}
