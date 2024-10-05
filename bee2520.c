#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        int city[n][m];
        int x1, y1, x2, y2, dist;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &city[i][j]);

                if (city[i][j] == 1)
                {
                    x1 = i;
                    y1 = j;
                }
                else if (city[i][j] == 2)
                {
                    x2 = i;
                    y2 = j;
                }
            }
        }

        dist = abs(x1 - x2) + abs(y1 - y2);

        printf("%d\n", dist);
    }

    return 0;
}
