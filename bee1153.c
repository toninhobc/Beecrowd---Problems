#include <stdio.h>

long long fatorial(int x);

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("%lld\n", fatorial(n));

    return 0;
}

long long fatorial(int x)
{
    if (x <= 1) return 1;
    else return (x * fatorial(x - 1));
}
