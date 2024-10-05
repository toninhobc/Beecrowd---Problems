#include <stdio.h>
#include <string.h>

int main(void)
{
    int c;
    char t[2];
    float m[12][12];
    float soma = 0;
    float media;

    scanf("%d", &c);
    scanf("%s", t);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &m[i][j]);
        }
    }

    for (int i = 0; i < 12; i++)
    {
        soma += m[i][c];
    }

    if (strcmp(t, "S") == 0) printf("%f\n", soma);

    else
    {
        media = soma / 12;

        printf("%.1f\n", media);
    }

    return 0;
}
