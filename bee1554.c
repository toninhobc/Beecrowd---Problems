#include <stdio.h>

int main(void)
{
    int c;
    scanf("%d", &c);

    for (int i = 0; i < c; i++)
    {
        int n;
        scanf("%d", &n);

        int x[n + 1], y[n + 1];

        for (int j = 0; j <= n; j++)
        {
           scanf("%d %d", &x[j], &y[j]);
        }

        int dmin = (x[0] - x[1]) * (x[0] - x[1]) + (y[0] - y[1]) * (y[0] - y[1]);
        int bola = 1;

        for (int j = 2; j <= n; j++)
        {
            int d = (x[0] - x[j]) * (x[0] - x[j]) + (y[0] - y[j]) * (y[0] - y[j]);
            if (d < dmin)
            {
                dmin = d;
                bola = j;
            }
        }

        printf("%d\n", bola);
    }

    return 0;
}
