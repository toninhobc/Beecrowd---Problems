#include <stdio.h>

int main(void)
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        if (n == 0) break;

        int matriz[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int valor = i - j;
                if (valor < 0) valor = -valor;
                matriz[i][j] = valor + 1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                    printf("%3d", matriz[i][j]);
                else
                    printf(" %3d", matriz[i][j]);
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
