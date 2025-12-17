#include <stdio.h>

void reverse(int x, int y)
{
    int t;

    t = x;
    x = y;
    y = t;
    printf("after:- a=%d  b=%d\n", x, y);
}

int main()
{
    int a = 10, b = 20;

    reverse(a, b);

    printf("before:- a=%d  b=%d\n", a, b);

    return 0;
}