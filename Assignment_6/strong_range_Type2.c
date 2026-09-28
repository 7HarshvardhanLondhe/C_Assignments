#include <stdio.h>

void strong(int n)
{
    for(int i = 101; i <= n; i++)
    {
        int original = i;
        int num = i;
        int sum = 0;

        while(num > 0)
        {
            int digit = num % 10;
            int fact = 1;

            for(int j = 1; j <= digit; j++)
            {
                fact = fact * j;
            }

            sum = sum + fact;

            num = num / 10;
        }

        if(sum == original)
        {
            printf("%d\t", original);
        }
    }
}

int main()
{
    strong(201);

    return 0;
}