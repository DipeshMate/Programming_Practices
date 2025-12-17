#include <stdio.h>

int main()
{

    int a, b, x, y, t, hcf, lcm;

    printf("enter two integer");
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    hcf = a;
    lcm = (x * y) / hcf;

    printf("%d\n%d", hcf, lcm);
    return 0;
}