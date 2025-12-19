// Q-3 write C program to find whether the given integer is -
//  (i). a prime number (ii). an Armstrong number.

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    int c = 0;
    printf("%d\n", a);
    printf("%d\n", b);

    for (int i = 2; i <= 8; i++)
    {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }

    return 0;
}
