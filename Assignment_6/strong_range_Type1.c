#include <stdio.h>

void strong()
{
    for(int i = 101; i <= 201; i++)
    {
        int original = i;
        int n = i;
        int sum = 0;

        while(n > 0)
        {
            int digit = n % 10;
            int fact = 1;

            for(int j = 1; j <= digit; j++)
            {
                fact = fact * j;
            }

            sum = sum + fact;

            n = n / 10;
        }
        if(sum == original)
        {
            printf("%d\t", original);
        }
    }
}

int main()
{
    strong();

    return 0;
}