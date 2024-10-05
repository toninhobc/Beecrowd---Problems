#include <stdio.h>

int check(int v1[], int v2[], int n, long long int *sum);

int main(void)
{
    int n;
    long long int soma = 0;

    scanf("%d", &n);

    int carneiros[n], bandeiras[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &carneiros[i]);
        bandeiras[i] = 0;
        soma += carneiros[i];
    }

    int fazendas = check(carneiros, bandeiras, n, &soma);

    printf("%d %lld\n", fazendas, soma);

    return 0;
}

int check(int v1[], int v2[], int n, long long int *sum)
{
    int fazendas = 0;
    int i = 0;

    while (i >= 0 && i < n)
    {
        if (v2[i] == 0)
        {
            fazendas++;
            v2[i] = 1;
        }

        if ((v1[i] % 2) != 0)
        {
            if ((i + 1) < n)
            {
                v1[i] -= 1;
                (*sum) -= 1;
                i++;
            }
            else
            {
                v1[i] -= 1;
                (*sum) -= 1;
                break;
            }
        }
        else
        {
            if ((i - 1) >= 0)
            {
                if (v1[i] > 0)
                {
                    v1[i] -= 1;
                    (*sum) -= 1;
                }

                i--;
            }
            else
            {
                if (v1[i] > 0)
                {
                    v1[i] -= 1;
                    (*sum) -= 1;
                }

                break;
            }
        }
    }

    return fazendas;
}
