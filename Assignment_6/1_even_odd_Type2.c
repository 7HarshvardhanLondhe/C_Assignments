#include <stdio.h>

void check(int n)
{
    if(n % 2 == 0)
        printf("Num is Even");
    else
        printf("Num is Odd");
}

int main()
{
    check(68);
    return 0;
}