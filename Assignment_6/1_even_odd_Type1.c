#include <stdio.h>
void check()
{
    int n = 68;
    if(n % 2 == 0)
        printf("Num is Even");
    else
        printf("Num is Odd");
}
int main()
{
    check();
    return 0;
}