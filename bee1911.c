#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[21];
    char ass[21];
} Aluno;

int verify(char original[21], char aula[21]);

int main(void)
{
    Aluno lista[50];
    char nome_aula[21], ass_aula[21];
    int n, m, resp, dif;

    scanf("%d", &n);
    while (n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            getchar();
            scanf("%s %s", lista[i].nome, lista[i].ass);
        }

        scanf("%d", &m);

        resp = 0;

        for (int i = 0; i < m; i++)
        {
            getchar();
            scanf("%s %s", nome_aula, ass_aula);

            for (int j = 0; j < n; j++)
            {
                if (strcmp(nome_aula, lista[j].nome) == 0)
                {
                    dif = verify(lista[j].ass, ass_aula);
                    if (dif > 1) resp++;
                }
            }
        }

        printf("%d\n", resp);
        scanf("%d", &n);
    }

    return 0;
}

int verify(char original[21], char aula[21])
{
    int dif, n, m;

    dif = 0;
    n = strlen(original);
    m = strlen(aula);

    if (n < m)
    {
        for (int i = 0; i < n; i++)
        {
            if (original[i] != aula[i]) dif++;
        }
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            if (original[i] != aula[i]) dif++;
        }
    }

    return dif;
}
