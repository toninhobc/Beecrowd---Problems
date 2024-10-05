#include <stdio.h>

int main() {
    
    //Declaração de variáveis
    int distancia, tempo;

    // Leitura da distância em Km
    scanf("%d", &distancia);

    // Cálculo do tempo necessário (em minutos)
    tempo = 2 * distancia;

    // Impressão do resultado
    printf("%d minutos\n", tempo);

    return 0;
}

