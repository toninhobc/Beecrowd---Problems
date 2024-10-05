#include <stdio.h>

int granizo(int n, int maior);

int main(void)
{
    while (1)
    {
        int h;
        scanf("%d", &h);

        if (h == 0) break;

        int maior = granizo(h, h);

        printf("%d\n", maior);
    }

    return 0;
}

int granizo(int n, int maior)
{
    if (n == 1) return maior;

    int next;

    if ((n % 2) == 0) next = n / 2;
    else next = 3 * n + 1;

    if (next > maior) maior = next;

    return granizo(next, maior);
}
