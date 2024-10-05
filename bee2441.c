#include<stdio.h>

int main(void)
{
    int f1, f2, f3, aux, area, sobf1f2, sobf2f3;

    scanf("%d %d %d", &f1, &f2, &f3);

    if(f1 > f2)
    {
        aux = f1;
        f1 = f2;
        f2 = aux;
    }
    if(f2 > f3)
    {
        aux = f2;
        f2 = f3;
        f3 = aux;
    }
    if(f1 > f2)
    {
        aux = f1;
        f1 = f2;
        f2 = aux;
    }

    sobf1f2 = f2-f1;

    sobf2f3 = f3-f2;

    area = 0;

    if(sobf1f2 <= 200)
    {
        area = area + (200-sobf1f2);
    }

    if(sobf2f3 <= 200)
    {
        area = area + (200-sobf2f3);
    }

    area=area*100;
    printf("%d\n",area);

    return 0;
}
