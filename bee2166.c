#include <stdio.h>

double raiz(int x);

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("%.10lf\n", (1.0 + raiz(n)));

    return 0;
}

double raiz(int x)
{
    if (x == 0) return 0.0;
    else return 1.0 / (2.0 + raiz(x - 1));
}
