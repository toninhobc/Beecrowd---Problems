#include <stdio.h>

int main(void)
{
    int n, c, m;

    scanf("%d %d %d", &n, &c, &m);

    int x[c], y[m];

    for (int i = 0; i < c; i++)
    {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &y[i]);
    }

    int album[n + 1];

    for (int i = 0; i <= n; i++)
    {
        album[i] = 0;
    }

    for (int i = 0; i < m; i++)
    {
        album[y[i]] = 1;
    }

    int count = 0;

    for (int i = 0; i < c; i++)
    {
        if (album[x[i]] == 0)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
