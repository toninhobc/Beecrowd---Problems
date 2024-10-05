#include <stdio.h>

int main(void)
{
    int x;
    while (1)
    {
        scanf("%d", &x);
        if (x == 0) break;

        int soma = 0;

        for (int i = 0; i < 5; i++)
        {
            if ((x % 2) == 0)
            {
                soma += x;
                x += 2;
            }
            else
            {
                soma += (x + 1);
                x += 2;
            }
        }

        printf("%d\n", soma);
    }

    return 0;
}
