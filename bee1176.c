#include <stdio.h>

long long vetor[61];

void fib(void);

int main(void)
{
    int t, n;

    scanf("%d", &t);

    fib();

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);

        printf("Fib(%d) = %lld\n", n, vetor[n]);
    }

    return 0;
}

void fib(void)
{
    vetor[0] = 0;
    vetor[1] = 1;

    for (int i = 2; i <= 60; i++)
    {
        vetor[i] = vetor[i - 1] + vetor[i - 2];
    }
}