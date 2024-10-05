#include <stdio.h>

int main() {
    int A, B;

    // Lendo os valores de A e B
    scanf("%d %d", &A, &B);

    // Verificando se os valores são múltiplos
    if (A % B == 0 || B % A == 0) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}
