#include <stdio.h>
#include <string.h>

int main(void)
{
    float m[12][12];
    char op[2];
    float soma = 0;

    scanf("%s", op);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &m[i][j]);

            if (i > j) soma += m[i][j];
        }
    }

    if (strcmp(op, "S") == 0) printf("%.1f\n", soma);
    else if (strcmp(op, "M") == 0) printf("%.1f\n", (soma / 66.0));

    return 0;
}
