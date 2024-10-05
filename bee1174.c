#include <stdio.h>

int main(void)
{
    float vetor[100];

    for (int i = 0; i < 100; i++)
    {
        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < 100; i++)
    {
        if (vetor[i] <= 10.0)
        {
            printf("A[%d] = %.1f\n", i, vetor[i]);
        }
    }

    return 0;
}
