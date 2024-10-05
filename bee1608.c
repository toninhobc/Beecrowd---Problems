#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int money, ingred, type;
        scanf("%d %d %d", &money, &ingred, &type);

        int valor[ingred];

        for (int j = 0; j < ingred; j++)
        {
            scanf("%d", &valor[j]);
        }

        int max_cakes = 0;

        for (int j = 0; j < type; j++)
        {
            int num_ingred;
            scanf("%d", &num_ingred);

            int total = 0;

            for (int k = 0; k < num_ingred; k++)
            {
                int idx, qtd;
                scanf("%d %d", &idx, &qtd);

                total += valor[idx] * qtd;
            }

            int num_cakes = money / total;

            if (num_cakes > max_cakes)
            {
                max_cakes = num_cakes;
            }
        }

        printf("%d\n", max_cakes);
    }

    return 0;
}
