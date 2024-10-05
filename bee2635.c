#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char palavras[n][101];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", palavras[i]);
    }

    int q;
    scanf("%d", &q);
    char consulta[q][101];

    for (int i = 0; i < q; i++)
    {
        scanf("%s", consulta[i]);
    }

    for (int i = 0; i < q; i++)
    {
        int count = 0;
        int max_len = 0;

        for (int j = 0; j < n; j++)
        {
            if (strncmp(palavras[j], consulta[i], strlen(consulta[i])) == 0)
            {
                count++;
                int len = strlen(palavras[j]);

                if (len > max_len) max_len = len;
            }
        }

        if (count > 0) printf("%d %d\n", count, max_len);
        else printf("-1\n");
    }

    return 0;
}
