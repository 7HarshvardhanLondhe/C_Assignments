#include <stdio.h>

void armstrong(int n)
{
    for(int i = 10; i <= n; i++)
    {
        int num = i;
        int sum = 0;
        int temp = num;

        while(num > 0)
        {
            sum = sum + (num % 10) * (num % 10) * (num % 10);
            num = num / 10;
        }

        if(temp == sum)
        {
            printf("%d ", temp);
        }
    }
}

int main()
{
    armstrong(500);

    return 0;
}