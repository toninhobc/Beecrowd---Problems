#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;

    while (1)
    {
        scanf("%d", &n);
        if (n == 0) break;

        for (int i = 0; i < n; i++)
        {
            char linha[1001];
            int pares = 0, impares = 0;
            int soma = 0;

            scanf("%s", linha);

            int len = strlen(linha);

            for (int j = 0; j < len; j++)
            {
                if ((j % 2) == 0)
                {
                    pares += (linha[j] - '0');
                }
                else impares += (linha[j] - '0');
            }

            while (pares > 0)
            {
                soma += (pares % 10);
                pares = (pares / 10);
            }

            while (impares > 0)
            {
                soma += (impares % 10);
                impares = (impares / 10);
            }

            printf("%d\n", soma);
        }
    }

    return 0;
}
