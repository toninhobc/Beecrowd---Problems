#include <stdio.h>

int main(void)
{
    int n, x, vetor[2001] = {0};

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        vetor[x]++;
    }

    for (int i = 1; i <= 2000; i++)
    {
        if (vetor[i] != 0)
        {
            printf("%d aparece %d vez(es)\n", i, vetor[i]);
        }
    }

    return 0;
}
