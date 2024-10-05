#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int pontos = 1;
    int maior_sequencia = 1;

    int valor_anterior, valor_atual;
    scanf("%d", &valor_anterior);
    n--;

    while(n--) {

        scanf("%d", &valor_atual);

        if(valor_atual == valor_anterior) {

            pontos++;

            if(pontos > maior_sequencia) {
                maior_sequencia = pontos;
            }

        }
        else {
            pontos = 1;
        }

        valor_anterior = valor_atual;
    }

    printf("%d\n", maior_sequencia);

    return 0;
}