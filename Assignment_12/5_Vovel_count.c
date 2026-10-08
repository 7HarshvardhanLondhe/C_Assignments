#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="harirsheaa";
	int count=0;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		{
			count++;
		}
	}
	printf("count of vowels are:%d ",count);
}