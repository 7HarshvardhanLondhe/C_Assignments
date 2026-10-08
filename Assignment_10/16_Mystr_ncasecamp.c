#include<stdio.h>

int mystrncasecmp(char *str1, char *str2, int n)
{
    int i = 0;

    while(i < n)
    {
        char ch1 = str1[i];
        char ch2 = str2[i];

        if(ch1 >= 'A' && ch1 <= 'Z')
            ch1 = ch1 + 32;

        if(ch2 >= 'A' && ch2 <= 'Z')
            ch2 = ch2 + 32;

        if(ch1 != ch2)
        {
            return ch1 - ch2;
        }

        if(str1[i] == '\0' || str2[i] == '\0')
        {
            return 0;
        }

        i++;
    }

    return 0;
}

void main()
{
    char str1[] = "HARSHvardhan";
    char str2[] = "harshLONDHE";

    int result = mystrncasecmp(str1, str2, 5);

    if(result == 0)
        printf("First 5 characters are equal");
    else if(result < 0)
        printf("str1 is smaller");
    else
        printf("str1 is greater");
}