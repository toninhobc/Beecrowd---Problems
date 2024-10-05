#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[101];
    int poder;
    int kills;
    int deaths;
} Candidatos;

int main(void)
{
    int n;
    scanf("%d", &n);

    Candidatos candidato[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", candidato[i].nome, &candidato[i].poder, &candidato[i].kills, &candidato[i].deaths);
    }

    Candidatos godofor = candidato[0];

    for (int i = 1; i < n; i++)
    {
        if (candidato[i].poder > godofor.poder)
        {
            godofor = candidato[i];
        }
        else if (candidato[i].poder == godofor.poder)
        {
            if (candidato[i].kills > godofor.kills)
            {
                godofor = candidato[i];
            }
            else if (candidato[i].kills == godofor.kills)
            {
                if (candidato[i].deaths < godofor.deaths)
                {
                    godofor = candidato[i];
                }
                else if (candidato[i].deaths == godofor.deaths)
                {
                    if (strcmp(candidato[i].nome, godofor.nome) < 0)
                    {
                        godofor = candidato[i];
                    }
                }
            }
        }
    }

    printf("%s\n", godofor.nome);

    return 0;
}
