#include <stdio.h>
#include <string.h>

typedef struct {
    char item[21];
} Itens;

void sort(Itens itens[], int wordcount);
void tiradupla(Itens itens[], int *wordcount);

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        char lista[22000];
        scanf("%[^\n]", lista);
        getchar();

        int wordcount = 1;

        for (int j = 0, len = strlen(lista); j < len; j++)
        {
            if (lista[j] == ' ') wordcount++;
        }

        Itens itens[wordcount];
        int p = 0, k = 0;

        for (int j = 0, len = strlen(lista); j < len; j++)
        {
            if (lista[j] != ' ')
            {
                itens[p].item[k] = lista[j];
                k++;
            }
            else
            {
                itens[p].item[k] = '\0';
                p++;
                k = 0;
            }
        }

        itens[p].item[k] = '\0';

        sort(itens, wordcount);

        tiradupla(itens, &wordcount);

        for (int j = 0; j < wordcount; j++)
        {
            if (j > 0) printf(" ");
            printf("%s", itens[j].item);
        }

        printf("\n");
    }

    return 0;
}

void sort(Itens itens[], int wordcount)
{
    for (int i = 0; i < (wordcount - 1); i++)
    {
        for (int j = (i + 1); j < wordcount; j++)
        {
            if (strcmp(itens[i].item, itens[j].item) > 0)
            {
                Itens temp = itens[i];
                itens[i] = itens[j];
                itens[j] = temp;
            }
        }
    }
}

void tiradupla(Itens itens[], int *wordcount)
{
    int j = 0;

    for (int i = 1; i < *wordcount; i++)
    {
        if (strcmp(itens[j].item, itens[i].item) != 0)
        {
            j++;
            strcpy(itens[j].item, itens[i].item);
        }
    }

    *wordcount = (j + 1);
}
