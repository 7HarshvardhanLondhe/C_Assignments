#include<stdio.h>

void mystrncat(char *str1, char *str2, int n)
{
    int i = 0;
    int j = 0;

    // Find end of str1
    while(str1[i] != '\0')
    {
        i++;
    }

    // Copy n characters
    while(str2[j] != '\0' && j < n)
    {
        str1[i] = str2[j];

        i++;
        j++;
    }

    str1[i] = '\0';

    printf("Concat string = %s", str1);
}

void main()
{
    char str1[100] = "harsh";
    char str2[] = "vardhan";

    mystrncat(str1, str2, 4);
}