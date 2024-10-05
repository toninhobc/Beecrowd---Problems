#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        int *vetor = (int *)malloc(n * sizeof(int));
        long long int soma_tot = 0;
        long long int soma_parc = 0;
        long long int menor_dif;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &vetor[i]);
            soma_tot += vetor[i];
        }

        menor_dif = soma_tot;

        for (int i = 0; i < n; i++)
        {
            soma_parc += vetor[i];

            long long int soma_gus = soma_tot - soma_parc;
            long long int diff = llabs(soma_parc - soma_gus);

            if (diff < menor_dif)
            {
                menor_dif = diff;
            }
        }

        printf("%lld\n", menor_dif);
    }

    return 0;
}
