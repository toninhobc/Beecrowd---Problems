#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int matriz[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    int maxsoma = 0;

    for (int i = 0; i < n; i++)
    {
        int linha = 0;

        for (int j = 0; j < m; j++)
        {
            linha += matriz[i][j];
        }

        if (linha > maxsoma)
        {
            maxsoma = linha;
        }
    }

    for (int j = 0; j < m; j++)
    {
        int coluna = 0;

        for (int i = 0; i < n; i++)
        {
            coluna += matriz[i][j];
        }

        if (coluna > maxsoma)
        {
            maxsoma = coluna;
        }
    }

    printf("%d\n", maxsoma);

    return 0;
}
