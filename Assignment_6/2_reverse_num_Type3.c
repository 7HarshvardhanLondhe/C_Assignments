#include <stdio.h>

int reverse()
{
    int n = 213;
    int rev = 0;

    while(n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    return rev;
}

int main()
{
    printf("Reverse is %d", reverse());
    return 0;
}