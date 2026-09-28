#include <stdio.h>

int check(int n)
{
    if(n % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    if(check(68))
        printf("Num is Even");
    else
        printf("Num is Odd");

    return 0;
}