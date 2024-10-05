#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int predios[200000];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &predios[i]);
    }

    int k = predios[0];
    int maxdist = predios[0] + 1;

    for (int i = 1; i < n; i++)
    {
        if ((predios[i] + i + k) > maxdist)
        {
            maxdist = (predios[i] + i + k);
        }

        if (k < (predios[i] - i))
        {
            k = (predios[i] - i);
        }
    }

    printf("%d\n", maxdist);

    return 0;
}
