#include <stdio.h>

int main() {

    int i;
    float fracao;
    float soma = 0;


    for(i = 1; i <= 100; i++) {

        fracao = 1.0 / i;

        soma += fracao;

    }

    printf("%.2lf\n", soma);

    return 0;

}