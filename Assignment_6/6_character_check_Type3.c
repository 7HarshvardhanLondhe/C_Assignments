#include <stdio.h>

int check()
{
    char ch = '#';

    if(ch >= 'a' && ch <= 'z')
        return 1;
    else if(ch >= 'A' && ch <= 'Z')
        return 2;
    else if(ch >= '0' && ch <= '9')
        return 3;
    else
        return 4;
}

int main()
{
    int result = check();

    if(result == 1)
        printf("Character is Lowercase");
    else if(result == 2)
        printf("Character is Uppercase");
    else if(result == 3)
        printf("Character is Digit");
    else
        printf("Character is Special Symbol");

    return 0;
}