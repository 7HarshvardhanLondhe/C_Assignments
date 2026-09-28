#include <stdio.h>

void perfect(int n)
{
    for(int i = 1; i <= n; i++)
    {
        int sum = 0;

        for(int j = 1; j <= n; j++)
        {
            if(i % j == 0 && j != i)
            {
                sum = sum + j;
            }
        }

        if(sum == i)
        {
            printf("Perfect nums are = %d ", i);
        }
    }
}

int main()
{
    perfect(100);

    return 0;
}