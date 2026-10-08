#include<stdio.h>
#include<string.h>

void main()
{
    char str1[100] = "harsh";
    char str2[100] = "vardhan";
    char str3[100];

    printf("1. strlen      = %lu\n", strlen(str1));

    strcpy(str3, str1);
    printf("2. strcpy      = %s\n", str3);

    strncpy(str3, str2, 4);
    str3[4] = '\0';
    printf("3. strncpy     = %s\n", str3);

   // 
    strcpy(str3, str1);
    strcat(str3, str2);
    printf("4. strcat      = %s\n", str3);


    //
    strcpy(str3, str1);
    strncat(str3, str2, 4);
    printf("5. strncat     = %s\n", str3);


    //
    printf("6. strcmp      = %d\n", strcmp(str1, str2));


    //
    printf("7. strncmp     = %d\n", strncmp(str1, str2, 3));


    //
    printf("8. strchr      = %s\n", strchr(str1, 'r'));


    // 
    printf("9. strrchr     = %s\n", str1);
    printf("   position of last 'h' = %ld\n",
           strrchr(str1, 'h') - str1);


    //
    printf("10. strstr     = %s\n", strstr(str1, "ar"));


    //
    printf("11. strspn     = %lu\n",
           strspn(str1, "har"));


    //
    printf("12. strcspn    = %lu\n",
           strcspn(str1, "v"));


    //
    printf("13. strpbrk    = %s\n",
           strpbrk(str1, "aeiou"));


    //
    strcpy(str3, "harsh,vardhan,londhe");

    printf("14. strtok     = ");
    char *token = strtok(str3, ",");

    while(token != NULL)
    {
        printf("%s ", token);
        token = strtok(NULL, ",");
    }
    printf("\n");


    //
    strcpy(str3, "abcdef");
    memset(str3, '*', 3);
    printf("15. memset     = %s\n", str3);


    //
    char a[] = "abc";
    char b[] = "abc";

    printf("16. memcmp     = %d\n",
           memcmp(a, b, 3));


    // 
    char source[] = "hello";
    char destination[20];

    memcpy(destination, source, strlen(source) + 1);
    printf("17. memcpy     = %s\n", destination);


    // 
    char moveStr[20] = "abcdef";

    memmove(moveStr + 2, moveStr, 4);
    moveStr[6] = '\0';

    printf("18. memmove    = %s\n", moveStr);


    // 
    char text[] = "harshvardhan";

    char *p = memchr(text, 'v', strlen(text));

    printf("19. memchr     = %s\n", p);

    //
    printf("20. strerror   = %s\n", strerror(2));

    //
    printf("21. strcoll    = %d\n",
           strcoll("abc", "abd"));
}