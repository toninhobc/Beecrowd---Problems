#include <stdio.h>

int main(void)
{
    int n[10], v;

    scanf("%d", &v);

    printf("N[0] = %d\n", v);

    for (int i = 1; i < 10; i++)
    {
        v *= 2;
        printf("N[%d] = %d\n", i, v);
    }

    return 0;
}