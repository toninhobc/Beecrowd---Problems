#include <stdio.h>

int main(void)
{
    int par[5], impar[5], x;
    int par_index = 0, impar_index = 0;

    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &x);

        if ((x % 2) == 0)
        {
            par[par_index] = x;
            par_index++;

            if (par_index == 5)
            {
                for (int j = 0; j < 5; j++)
                {
                    printf("par[%d] = %d\n", j, par[j]);
                }

                par_index = 0;
            }
        }
        else
        {
            impar[impar_index] = x;
            impar_index++;

            if(impar_index == 5)
            {
                for (int j = 0; j < 5; j++)
                {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }

                impar_index = 0;
            }
        }
    }

    for (int j = 0; j < impar_index; j++)
    {
        printf("impar[%d] = %d\n", j, impar[j]);
    }

    for (int j = 0; j < par_index; j++)
    {
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}
