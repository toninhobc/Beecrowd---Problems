#include <stdio.h>

int main(void)
{
    int vetor[20];

    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        int temp = vetor[i];
        vetor[i] = vetor[19 - i];
        vetor[19 - i] = temp;
    }

    for (int i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
