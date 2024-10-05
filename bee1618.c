#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int m[n][10];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &m[i][j]);
        }

        if (m[i][8] >= m[i][0] && m[i][8] <= m[i][4] && m[i][9] >= m[i][1] && m[i][9] <= m[i][5])
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}
