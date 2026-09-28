#include <stdio.h>

void check(int age)
{
    if(age < 18)
        printf("Not eligible for voting");
    else
        printf("Eligible for voting");
}

int main()
{
    check(48);
    return 0;
}