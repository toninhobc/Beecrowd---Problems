#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    if ((a >= 6) && (b >= 6))
    {
        if (((a >= 18) || (b >= 18)) || ((a >= 14) && (b >= 14)))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
