#include <stdio.h>
#include <string.h>

int main(void)
{
    float m[12][12];
    char o[2];
    float media, soma = 0;


    scanf("%s", o);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &m[i][j]);

            if (i < (11 - j)) soma += m[i][j];
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
