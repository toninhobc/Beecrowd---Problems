#include <stdio.h>
#include <string.h>

int main(void)
{
    double m[12][12];
    char op[2];
    double soma = 0;

    scanf("%s", op);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);

            if ((i > j) && (i > (11 - j))) soma += m[i][j];
        }
    }

    if (strcmp(op, "S") == 0) printf("%.1lf\n", soma);
    else if (strcmp(op, "M") == 0) printf("%.1lf\n", (soma / 30));

    return 0;
}
