#include <stdio.h>

void leapYear(int n)
{
    if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
        printf("Given %d year is Leap Year", n);
    else
        printf("Given %d is Not Leap Year", n);
}

int main()
{
    leapYear(2020);
    return 0;
}