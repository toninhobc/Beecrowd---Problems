#include <stdio.h>

int main(void)
{
    while (1)
    {
        int n;
        scanf("%d", &n);

        if (n == 0)
            return 0;

        for (int i = 0; i < n; i++)
        {
            int questao[5];
            int preto = 0;
            int index = 1;

            for (int j = 0; j < 5; j++)
            {
                scanf("%d", &questao[j]);

                if (questao[j] <= 127)
                {
                    preto++;
                    index = j;
                }
            }

            if (preto == 1)
            {
                char resposta = 'A' + index;
                printf("%c\n", resposta);
            }
            else
                printf("*\n");
        }
    }
}
