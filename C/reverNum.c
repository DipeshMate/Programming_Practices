#include <stdio.h>

int main()
{

    char n, r;
    printf("enter number=");
    scanf("%c", &n);
    for (char i = 1; i <= n; i++)
    {
        r = n % 10;
        printf("%c", r);
        n = n / 10;
    }

    return 0;
}