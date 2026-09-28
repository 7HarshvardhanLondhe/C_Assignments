#include <stdio.h>

void check()
{
    char ch = 'U';

    if(ch == 'a' || ch == 'A' ||
       ch == 'e' || ch == 'E' ||
       ch == 'i' || ch == 'I' ||
       ch == 'o' || ch == 'O' ||
       ch == 'u' || ch == 'U')
        printf("Given char %c is Vowel", ch);
    else
        printf("Given char %c is Consonant", ch);
}

int main()
{
    check();
    return 0;
}