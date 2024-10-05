#include <stdio.h>
#include <math.h>

int main(void)
{
    int v, n;
    long long int total;

    scanf("%d %d", &v, &n);

    total = ((long long int) v) * n;

    for (int i = 10; i < 90; i += 10)
    {
        printf("%lld ", (long long int) ceil(((double) total * i) / 100.00));
    }

    printf("%lld\n", (long long int) ceil(((double) total * 90) / 100.00));

    return 0;
}
