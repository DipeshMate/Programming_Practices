#include <stdio.h>
#include <Math.h>

int main()
{

    int a = -37, b = -2;
    float ans;

    if (a == 0)
    {
        printf("Result = 0");
    }
    if (b == 0)
    {
        printf("Divide by zero error");
    }

    int sign;

    sign = (a < 0) ^ (b < 0);
    // if ((a < 0 && b < 0) || (a > 0 && b > 0))
    // {
    //     sign = 0;
    // }
    // if ((a > 0 && b < 0) || (a < 0 && b > 0))
    // {
    //     sign = 1;
    // }
    a = abs(a);
    b = abs(b);
    ans = exp(log(a) - log(b));

    printf("Result = %f", sign == 0 ? ans : -ans);

    return 0;
}
