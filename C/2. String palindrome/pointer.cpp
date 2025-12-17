#include <stdio.h>
#include <conio.h>

main()
{

    char c[30];
    int l, d;

    char *p = &c[30];

    printf("Enter name to get its palindrome:-");
    scanf("%s", p);

    l = 0;
    for (int i = 0; *(p + i) != '\0'; i++)
    {
        l++;
        printf("l");
    }

    d = 0;
    for (int i = 0; *(p + i) != '\0'; i++)
    {
        if (*(p + i) != *(p + (l - i - 1)))
        {
            d = d + 1;
        }

        // printf("%c",*(p+(l-i-1)));
    }
    // printf("Done");
    if (d == 0)
    {
        printf("%s is a palindrome Name", p);
    }
    else if (d != 0)
    {
        printf("%s is not a palindrome Name", p);
    }
}