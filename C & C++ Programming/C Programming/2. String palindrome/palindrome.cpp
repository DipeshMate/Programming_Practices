// 2 Write C program to check whether the given string is palindrome or not .
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str[30];
    printf("Enter name to get its palindrome:- ");
    scanf("%s", str);

    char s[] = "", t;
    int l, n;

    for (int i = 0; i <= n / 2; i++)
    {
        t = s[i];
        s[i] = s[n];
        s[n] = t;
    }

    if (strcmp(str, s) == 0)
    {
        printf("%s is a palindrome\n", str);
    }
    else
    {
        printf("%s is not a palindrome\n", str);
    }
}