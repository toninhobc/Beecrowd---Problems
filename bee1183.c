#include <stdio.h>
#include <string.h>

int main(void)
{
    char o[2];
    float m[12][12];
    float soma = 0;
    float media;

    scanf("%s", o);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &m[i][j]);

            if (j > i) soma += m[i][j];
        }
    }

    if (strcmp(o, "S") == 0) printf("%f\n", soma);
    else
    {
        media = soma / 66;
        printf("%.1f\n", media);
    }

    return 0;
}