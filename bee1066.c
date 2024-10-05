#include <stdio.h>

int main() {

    int valor[5];
    int i;
    int pares = 0;
    int impares = 0;
    int positivos = 0;
    int negativos = 0;

    for(i = 0; i < 5; i++) {

        scanf("%d", &valor[i]);

        if((valor[i]%2) == 0) {
            pares++;
        }

        else if((valor[i]%2) != 0) {
            impares++;
        }

        if(valor[i] > 0) {
            positivos++;
        }

        else if(valor[i] < 0) {
            negativos++;
        }
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

    return 0;

}