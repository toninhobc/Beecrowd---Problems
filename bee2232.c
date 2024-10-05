#include <stdio.h>

int somapascal(int n);

int main(void)
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int soma = somapascal(n - 1);

        printf("%d\n", soma);
    }

    return 0;
}

int somapascal(int n)
{
    if (n == 0) return 1;

    else return (1 << n) + somapascal(n - 1);
}
