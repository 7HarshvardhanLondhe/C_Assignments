#include <stdio.h>

int check()
{
    char ch = 'U';

    if(ch == 'a' || ch == 'A' ||
       ch == 'e' || ch == 'E' ||
       ch == 'i' || ch == 'I' ||
       ch == 'o' || ch == 'O' ||
       ch == 'u' || ch == 'U')
        return 1;
    else
        return 0;
}

int main()
{
    if(check())
        printf("U is Vowel");
    else
        printf("U is Consonant");

    return 0;
}