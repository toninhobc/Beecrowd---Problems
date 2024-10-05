#include <stdio.h>

int main(void)
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        int e1, e2;
        scanf("%d %d", &e1, &e2);

        int a1[n], t1[n-1], t2[n-1], a2[n];

        for (int i = 0; i < n; i++)
        {
            int num;
            scanf("%d", &num);
            a1[i] = num;
        }
        for (int i = 0; i < n; i++)
        {
            int num;
            scanf("%d", &num);
            a2[i] = num;
        }
        for (int i = 0; i < n-1; i++)
        {
            int num;
            scanf("%d", &num);
            t1[i] = num;
        }
        for (int i = 0; i < n-1; i++)
        {
            int num;
            scanf("%d", &num);
            t2[i] = num;
        }

        int x1, x2;
        scanf("%d %d", &x1, &x2);

        a1[0] += e1;
        a2[0] += e2;

        a1[n-1] += x1;
        a2[n-1] += x2;

        for (int i = n-2; i >= 0; i--)
        {
            if ((a2[i+1] + t1[i]) < a1[i+1])
            {
                a1[i] += a2[i+1] + t1[i];
            }
            else
            {
                a1[i] += a1[i+1];
            }

            if ((a1[i+1] + t2[i]) < a2[i+1])
            {
                a2[i] += a1[i+1] + t2[i];
            }
            else
            {
                a2[i] += a2[i+1];
            }
        }

        if (a2[0] < a1[0])
        {
            printf("%d\n", a2[0]);
        }
        else
        {
            printf("%d\n", a1[0]);
        }
    }

    return 0;
}
