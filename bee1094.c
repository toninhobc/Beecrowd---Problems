#include <stdio.h>

int main() {

    int i;
    int casos, quantia;
    int cobaias = 0; 
    int coelhos = 0;
    int ratos = 0;
    int sapos = 0;
    char tipo;

    scanf("%d", &casos);

    for(i = 0; i < casos; i++) {

        scanf("%d %c", &quantia, &tipo);

        cobaias += quantia;

        switch(tipo) {

            case 'C':
            coelhos += quantia;
            break;

            case 'R':
            ratos += quantia;
            break;

            case 'S':
            sapos += quantia;
            break;
        }

    }

    printf("Total: %d cobaias\n", cobaias);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);

    printf("Percentual de coelhos: %.2f %%\n", (float)coelhos / cobaias * 100);
    printf("Percentual de ratos: %.2f %%\n", (float)ratos / cobaias * 100);
    printf("Percentual de sapos: %.2f %%\n", (float)sapos / cobaias * 100);

    return 0;

}