#include <stdio.h>

int main()
{
    char str1[100];
    char str2[100];

    printf("String 1: ");
    scanf("%s", str1);

    printf("String 2: ");
    scanf("%s", str2);

    int count1 = 0;
    int count2 = 0;

    int i = 0;
    while (str1[i] != '\0')
    {
        count1++;
        i++;
    }

    int j = 0;
    while (str2[j] != '\0')
    {
        count2++;
        j++;
    }

    if (count1 > count2)
     printf("String 1 is greater length");
    else if (count2 > count1)
     printf("String 2 is greater length");
    else
     printf("Both strings have equal length");

    
}