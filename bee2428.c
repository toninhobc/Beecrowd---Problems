#include<stdio.h>

int main(void)
{
    int a1, a2, a3, a4;

    scanf("%d %d %d %d", &a1, &a2, &a3, &a4);

    if(a1 * a2 == a3 * a4 || a1 * a3 == a2 * a4 || a1 * a4 == a2 * a3)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}
