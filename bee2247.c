#include <stdio.h>

int main(void)
{
    int num_testes = 1;
    int teste = 1;
    int dif = 0;
    int j, z;

    scanf("%d", &num_testes);

    while (num_testes != 0)
    {
        printf("Teste %d\n", teste++);

        dif = 0;

        for (int i = 0; i < num_testes; i++)
        {
            scanf("%d %d", &j, &z);

            dif += j - z;
            printf("%d\n", dif);
        }

        printf("\n");
        scanf ("%d", &num_testes);
    }

    return 0;
}
