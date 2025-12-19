// Fibanacii using Recursion // Online C compiler to run C program online
#include <stdio.h>

int fib(int f)
{
    if (f == 0)
    {
        return 0;
    }
    else if (f == 1)
    {
        return 1;
    }
    else
    {
        return fib(f - 1) + fib(f - 2);
    }
}
int main()
{
    // Write C code here

    int f = 0, i;
    scanf("%d", &f);

    for (i = 0; i < f; i++)
    {
        printf("%4d", fib(i));
    }

    return 0;
}