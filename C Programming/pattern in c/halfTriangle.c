#include <stdio.h>

// shraddha didi pattern video
int main()
{
    int n, m;
    printf("Enter Row:-");
    scanf("%d", &n);

    // for another pattern
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for reverse pattern

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = i; j >= 1; j--)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = n; j > i; j--)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if ((i + j) % 2 == 0)
    //         {
    //             printf("1 ");
    //         }
    //         if ((i + j) % 2 != 0)
    //             printf("0 ");
    //     }
    //     printf("\n");
    // }

    printf("%d %d %d", n++, n++, n++);
}
