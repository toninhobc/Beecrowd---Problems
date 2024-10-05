#include <stdio.h>

int main(void)
{
    int n, m;

    while (1)
    {
        scanf("%d %d", &n, &m);

        if ((n == 0) && (m == 0))
        {
            return 0;
        }

        int t[m];

        for (int i = 0; i < m; i++)
        {
            scanf("%d", &t[i]);
        }

        int count = 0;

        for (int i = 0; i < m; i++)
        {
            int duplicata = 0;

            if (t[i] == 0)
            {
                continue;
            }

            for (int j = (i + 1); j < m; j++)
            {
                if (t[j] == t[i])
                {
                    if(duplicata == 0)
                    {
                        count++;
                        duplicata = 1;
                    }
                    
                    t[j] = 0;
                }
            }
        }

        printf("%d\n", count);
    }

    return 0;
}