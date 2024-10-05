#include <stdio.h>

int main(void)
{
    int n, m;
    while(scanf("%d", &n) != EOF)
    {
        int vetor[n], vcopia[n];

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &vetor[i]);
        }

        for(int i = 2; i <= n; i++)
        {
            int idx = 0;
            int len = n;

            for(int j = 0; j < len; j++)
            {
                if(((j + 1) % i) == 0)
                {
                    n--;
                }
                else
                {
                    vcopia[idx] = vetor[j];
                    idx++;
                }
            }

            for(int k = 0; k < n; k++)
            {
                vetor[k] = vcopia[k];
            }
        }

        scanf("%d", &m);

        int count = 0;

        for(int i = 0; i < n; i++)
        {
            if(vcopia[i] == m)
            {
                count = 1;
                break;
            }
        }

        if(count == 1)
        {
            printf("Y\n");
        }
        else if(count == 0)
        {
            printf("N\n");
        }
    }

    return 0;
}
