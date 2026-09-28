#include <stdio.h>

void leapYear()
{
    int n = 2020;

    if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
        printf("Given %d year is Leap Year", n);
    else
        printf("Given %d is Not Leap Year", n);
}

int main()
{
    leapYear();
    return 0;
}