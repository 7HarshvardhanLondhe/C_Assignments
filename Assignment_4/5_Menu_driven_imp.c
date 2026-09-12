#include <stdio.h>
void main()
{
    int n, choice;
    int i, count, digit, rev, sum;

	while(1)
	{
    printf("\n----- MENU -----\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse a Number\n");
    printf("6. Find Sum of Digits\n");

	printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            if(n % 2 == 0)
                printf("Number is Even");
            else
                printf("Number is Odd");
            break;

        case 2:
            count = 0;

            for(i = 1; i <= n; i++)
            {
                if(n % i == 0)
                    count++;
            }

            if(count == 2)
                printf("Number is Prime");
            else
                printf("Number is Not Prime");
            break;

        case 3:
            {
                int temp = n;

                rev = 0;

                while(n != 0)
                {
                    digit = n % 10;
                    rev = rev * 10 + digit;
                    n = n / 10;
                }

                if(temp == rev)
                    printf("Number is Palindrome");
                else
                    printf("Number is Not Palindrome");
            }
            break;

        case 4:
            if(n > 0)
                printf("Number is Positive");
            else if(n < 0)
                printf("Number is Negative");
            else
                printf("Number is Zero");
            break;

        case 5:
            rev = 0;

            while(n != 0)
            {
                digit = n % 10;
                rev = rev * 10 + digit;
                n = n / 10;
            }

            printf("Reverse = %d", rev);
            break;

        case 6:
            sum = 0;

            while(n != 0)
            {
                digit = n % 10;
                sum = sum + digit;
                n = n / 10;
            }

            printf("Sum of digits = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }
 }
}