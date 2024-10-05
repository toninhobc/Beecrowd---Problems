#include <stdio.h>

int mdc(int a, int b);

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int f1, f2;
        scanf("%d %d", &f1, &f2);

        int div = mdc(f1, f2);

        printf("%d\n", div);
    }
}

int mdc(int a, int b)
{
    if (b == 0) return a;
    else mdc(b, a % b);
}