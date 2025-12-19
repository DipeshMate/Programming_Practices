// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("enter n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    ptr = realloc(ptr, 8);
    printf("now for 8:-");
    ptr = (int *)calloc(2, sizeof(int));

    for (int i = 0; i < 8; i++)
    {
        scanf("%d\n", &ptr[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}