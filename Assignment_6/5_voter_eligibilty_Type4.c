#include <stdio.h>

int check(int age)
{
    if(age >= 18)
        return 1;
    else
        return 0;
}

int main()
{
    if(check(48))
        printf("Eligible for voting");
    else
        printf("Not eligible for voting");

    return 0;
}