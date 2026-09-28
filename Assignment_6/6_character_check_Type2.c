#include <stdio.h>

void check(char ch)
{
    if(ch >= 'a' && ch <= 'z')
        printf("Character is Lowercase");
    else if(ch >= 'A' && ch <= 'Z')
        printf("Character is Uppercase");
    else if(ch >= '0' && ch <= '9')
        printf("Character is Digit");
    else
        printf("Character is Special Symbol");
}

int main()
{
    check('#');
    return 0;
}