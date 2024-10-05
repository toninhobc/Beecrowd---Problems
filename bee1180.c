#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    int min = vetor[0];
    int posicao;

    for (int i = 1; i < n; i++)
    {
        if (vetor[i] < min)
        {
            min = vetor[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", posicao);

    return 0;
}
