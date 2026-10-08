#include<stdio.h>

char* mystrrchr(char *str, char ch)
{
    int i = 0;
    char *result = NULL;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            result = &str[i];
        }

        i++;
    }

    return result;
}

void main()
{
    char str[] = "harshvardhan";

    char *result = mystrrchr(str, 's');

    if(result != NULL)
        printf("Last occurrence = %s", result);
    else
        printf("Character not found");
}