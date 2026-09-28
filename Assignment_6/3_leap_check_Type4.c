#include <stdio.h>

int leapYear(int n)
{
    if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    if(leapYear(2020))
        printf("2020 is Leap Year");
    else
        printf("2020 is Not Leap Year");

    return 0;
}