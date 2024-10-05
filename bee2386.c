#include <stdio.h>

int main(void)
{
    int area, n;

    scanf("%d %d", &area, &n);

    int fluxo[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &fluxo[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        long long fotons = (long long) fluxo[i] * area;

        if (fotons >= 40000000)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
