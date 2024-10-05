#include <stdio.h>
#include <string.h>

int main(void)
{
    char o[2];
    double m[12][12];
    double soma = 0;
    double media;

    scanf("%s", o);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);

            if (j > i && (11 - i) > j)
            {
                soma += m[i][j];
            }
        }
    }

    if (strcmp(o, "S") == 0) printf("%.1lf\n", soma);

    else
    {
        media = soma / 30.0;

        printf("%.1lf\n", media);
    }

    return 0;
}
