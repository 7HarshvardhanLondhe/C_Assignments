#include <stdio.h>

void reverse(int n)
{
    int rev = 0;

    while(n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    printf("Reverse is %d", rev);
}

int main()
{
    reverse(213);
    return 0;
}