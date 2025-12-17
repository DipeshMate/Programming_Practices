#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, x, y, LCM, HCF, t;
    printf("enter two integer=");
    scanf("%d%d", &x, &y);
    a = x;
    b = y;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    HCF = a;
    LCM = (x * y) / HCF;
    printf("%d is HCF\n", HCF);
    printf("%d is LCM", LCM);

    return 0;
}
