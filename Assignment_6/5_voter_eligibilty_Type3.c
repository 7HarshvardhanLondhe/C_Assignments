#include <stdio.h>
int check()
{
    int age = 48;

    if(age >= 18)
        return 1;
    else
        return 0;
}

int main()
{
    if(check())
        printf("Eligible for voting");
    else
        printf("Not eligible for voting");

    return 0;
}