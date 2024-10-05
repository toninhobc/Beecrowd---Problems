#include <stdio.h>

int main() {
    int valores[100];
    int maior = 0;
    int posicao = 0;

    // Lendo os 100 valores inteiros
    for (int i = 0; i < 100; i++) {
        scanf("%d", &valores[i]);
        
        // Verificando se o valor atual é maior que o maior valor encontrado até agora
        if (valores[i] > maior) {
            maior = valores[i];
            posicao = i + 1; // A posição é i + 1, pois os índices começam em 0
        }
    }

    // Apresentando o maior valor lido e sua posição
    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}
