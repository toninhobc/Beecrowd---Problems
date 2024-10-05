#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int k;
        scanf("%d", &k);

        char idiomas[k][21];

        for (int j = 0; j < k; j++)
        {
            scanf("%s", idiomas[j]);
        }

        int iguais = 1;

        for (int j = 1; j < k; j++)
        {
            if (strcmp(idiomas[j], idiomas[0]) != 0)
            {
                iguais = 0;
                break;
            }
        }

        if (iguais)
        {
            printf("%s\n", idiomas[0]);
        }
        else
        {
            printf("ingles\n");
        }
    }

    return 0;
}
