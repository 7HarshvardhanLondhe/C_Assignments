#include<stdio.h>

char* mystrnstr(char *str1, char *str2, int n)
{
    int i, j;

    for(i = 0; i < n && str1[i] != '\0'; i++)
    {
        j = 0;

        while(str2[j] != '\0' &&
              i + j < n &&
              str1[i+j] == str2[j])
        {
            j++;
        }

        if(str2[j] == '\0')
        {
            return &str1[i];
        }
    }

    return NULL;
}

void main()
{
    char str1[] = "harshvardhan";
    char str2[] = "vard";

    char *result = mystrnstr(str1, str2, 6);

    if(result != NULL)
        printf("Substring found = %s", result);
    else
        printf("Substring not found");
}