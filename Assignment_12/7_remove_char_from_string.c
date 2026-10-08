#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello";
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 == 0)
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("%s", str);

    return 0;
}