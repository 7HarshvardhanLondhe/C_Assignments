#include<stdio.h>

int mystrncmp(char *str1, char *str2, int n)
{
    int i = 0;

    while(i < n)
    {
        if(str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }

        if(str1[i] == '\0')
        {
            return 0;
        }

        i++;
    }

    return 0;
}

void main()
{
    char str1[] = "harsh";
    char str2[] = "harshvardhan";

    int result = mystrncmp(str1, str2, 5);

    if(result == 0)
        printf("First 5 characters are equal");
    else if(result < 0)
        printf("str1 is smaller");
    else
        printf("str1 is greater");
}