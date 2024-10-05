#include <stdio.h>

int main(void)
{
    int c;
    scanf("%d", &c);

    for (int i = 0; i < c; i++)
    {
        int b, e;
        scanf("%d %d", &b, &e);

        int vetor[100000];
        int idx = 0;

        for (int j = b; j <= e; j++)
        {
            int temp = j;
            int digits[5];
            int count = 0;

            do
            {
                digits[count++] = temp % 10;
                temp /= 10;
            } while (temp > 0);

            for (int k = count - 1; k >= 0; k--)
            {
                vetor[idx++] = digits[k];
            }
        }

        for (int j = e; j >= b; j--)
        {
            int temp = j;
            int digits[5];
            int count = 0;

            do
            {
                digits[count++] = temp % 10;
                temp /= 10;
            } while (temp > 0);

            for (int k = 0; k < count; k++)
            {
                vetor[idx++] = digits[k];
            }
        }

        for (int j = 0; j < idx; j++)
        {
            printf("%d", vetor[j]);
        }
        
        printf("\n");
    }

    return 0;
}
