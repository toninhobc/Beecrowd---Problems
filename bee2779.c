#include <stdio.h>

int main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);

    int x[m];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &x[i]);
    }

    int album[n + 1];

    for (int i = 0; i <= n; i++)
    {
        album[i] = 0;
    }

    for (int i = 0; i < m; i++)
    {
        album[x[i]] = 1;
    }

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (album[i] == 0)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
