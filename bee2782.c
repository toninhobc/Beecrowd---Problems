#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    if (n == 1)
    {
        printf("1\n");
        return 0;
    }

    int vetor[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    int count = 1;
    int start = 0;

    for (int i = 2; i < n; i++)
    {
        int dif1 = vetor[i - 1] - vetor[i - 2];
        int dif2 = vetor[i] - vetor[i - 1];

        if (dif1 != dif2)
        {
            count++;

            start = i - 1;
        }
    }

    printf("%d\n", count);

    return 0;
}