#include <stdio.h>

void check()
{
    int age = 48;

    if(age < 18)
        printf("Not eligible for voting");
    else
        printf("Eligible for voting");
}

int main()
{
    check();
    return 0;
}