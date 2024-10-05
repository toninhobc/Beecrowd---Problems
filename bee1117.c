#include <stdio.h>

int main() {

    double n, media;
    int nvalid = 0;
    double soma = 0;

    while(nvalid < 2) {

        scanf("%lf", &n);

        if(n >= 0 && n <= 10) {
            nvalid++;
            soma += n;
        }
        else {
            printf("nota invalida\n");
        }

    }

    media = soma / 2.0;

    printf("media = %.2lf\n", media);

    return 0;
} 