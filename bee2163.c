#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int terreno[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &terreno[i][j]);
        }
    }

    int found = 0, x = 0, y = 0;

    for (int i = 1; i < (n - 1) && !found; i++)
    {
        for (int j = 1; j < (m - 1) && !found; j++)
        {
            if (terreno[i][j] == 42)
            {
                if (terreno[i-1][j-1] == 7 && terreno[i-1][j] == 7 && terreno[i-1][j+1] == 7 && terreno[i][j-1] == 7 && terreno[i][j+1] == 7 && terreno[i+1][j-1] == 7 && terreno[i+1][j] == 7 && terreno[i+1][j+1] == 7)
                {
                    x = i + 1;
                    y = j + 1;
                    found = 1;
                }
            }
        }
    }

    printf("%d %d\n", x, y);
    return 0;
}
