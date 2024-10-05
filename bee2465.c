#include <stdio.h>

int n;

int check(int a, int b, int m1[n][n], int m2[n][n]);

int main(void)
{
    int x, y;

    scanf("%d", &n);
    scanf("%d %d", &x, &y);

    int alunos[n][n], bandeiras[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &alunos[i][j]);
            bandeiras[i][j] = 0;
        }
    }

    int counter = check(x, y, alunos, bandeiras);

    printf("%d\n", counter);

    return 0;
}

int check(int a, int b, int m1[n][n], int m2[n][n])
{
    m2[a - 1][b - 1] = 1;

    int count = 1;

    if ((m1[a - 1][b - 1] <= m1[a - 1][b]) && (b < n) && (m2[a - 1][b] == 0))
    {
        m2[a - 1][b] = 1;
        count += check(a, b + 1, m1, m2);
    }
    if ((m1[a - 1][b - 1] <= m1[a][b - 1]) && (a < n) && (m2[a][b - 1] == 0))
    {
        m2[a][b - 1] = 1;
        count += check(a + 1, b, m1, m2);
    }
    if ((m1[a - 1][b - 1] <= m1[a - 1][b - 2]) && ((b - 2) >= 0) && (m2[a - 1][b - 2] == 0))
    {
        m2[a - 1][b - 2] = 1;
        count += check(a, b - 1, m1, m2);
    }
    if ((m1[a - 1][b - 1] <= m1[a - 2][b - 1]) && ((a - 2) >= 0) && (m2[a - 2][b - 1] == 0))
    {
        m2[a - 2][b - 1] = 1;
        count += check(a - 1, b, m1, m2);
    }

    return count;
}
