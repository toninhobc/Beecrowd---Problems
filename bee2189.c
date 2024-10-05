#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int teste = 1;
    int ans;

    while (n > 0)
    {
        ans = 0;

        for (int i = 1; i <= n; i++)
        {
            int a;
            scanf("%d", &a);

            if (a == i) ans = i;
        }

        printf("Teste %d\n%d\n\n", teste++, ans);
        scanf("%d", &n);
    }

    return 0;
}
