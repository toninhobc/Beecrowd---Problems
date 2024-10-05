#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[100];
    char cor[10];
    char tamanho;
} Cliente;

int compare(const void *a, const void *b);

int main(void)
{
    int n, count = 0;

    while (1)
    {
        scanf("%d", &n);
        if(n == 0) break;

        if (count > 0) printf("\n");

        Cliente clientes[n];
        getchar();

        for (int i = 0; i < n; i++)
        {
            fgets(clientes[i].nome, sizeof(clientes[i].nome), stdin);
            clientes[i].nome[strcspn(clientes[i].nome, "\n")] = '\0';
            scanf("%s %c", clientes[i].cor, &clientes[i].tamanho);
            getchar();
        }

        qsort(clientes, n, sizeof(Cliente), compare);

        for (int i = 0; i < n; i++)
        {
            printf("%s %c %s\n", clientes[i].cor, clientes[i].tamanho, clientes[i].nome);
        }

        count++;
    }

    return 0;
}

int compare(const void *a, const void *b)
{
    Cliente *p1 = (Cliente *)a;
    Cliente *p2 = (Cliente *)b;

    int color_cmp = strcmp(p1->cor, p2->cor);
    if (color_cmp != 0) return color_cmp;

    if (p1->tamanho != p2->tamanho)
    {
        return (p2->tamanho - p1->tamanho);
    }

    return strcmp(p1->nome, p2->nome);
}
