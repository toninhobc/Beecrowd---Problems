#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        int soma = 0;

        if ((x % 2) == 0)
        {
            for (int j = 0; j < y; j++)
            {
                soma += (x + 1);
                x += 2;
            }
        }
        else
        {
            for (int j = 0; j < y; j++)
            {
                soma += x;
                x += 2;
            }
        }

        printf("%d\n", soma);
    }

    return 0;
}
