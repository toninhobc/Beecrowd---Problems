#include <stdio.h>

typedef struct
{
    char tipo[21];
    int validade;
} Carnes;

int main(void)
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        Carnes carne[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%s %d", carne[i].tipo, &carne[i].validade);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (carne[j].validade < carne[i].validade)
                {
                    Carnes temp = carne[i];
                    carne[i] = carne[j];
                    carne[j] = temp;
                }
            }

            printf("%s", carne[i].tipo);

            if (i != (n-1)) printf(" ");
        }

        printf("\n");
    }

    return 0;
}
