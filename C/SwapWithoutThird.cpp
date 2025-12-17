#include <stdio.h>

int main()
{

    int a = 6, b = 4;
    printf("Before a=%d, b=%d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("after a=%d, b=%d", a, b);

    return 0;
}