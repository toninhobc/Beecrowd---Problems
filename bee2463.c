#include <stdio.h>

int main(void)
{
    int num_salas, vidas;
    int vidas_global = 0;
    int vidas_atual = 0;

    scanf("%d", &num_salas);

    for (int i = 0; i < num_salas; i++)
    {
        scanf("%d", &vidas);

        if (vidas_atual + vidas > vidas)
        {
            vidas_atual = vidas_atual + vidas;
        }
        else
        {
            vidas_atual = vidas;
        }

        if (vidas_atual > vidas_global)
        {
            vidas_global = vidas_atual;
        }
    }

    printf("%d\n", vidas_global);

    return 0;
}
