#include <stdio.h>

int main() {
    
    // Declaração de variáveis
    int hi, hf, tempo;
    
    // Leitura dos dados de entrada
    scanf("%d %d", &hi, &hf);
    
    // Condicionais para calcular o tempo de jogo
    if(hi < hf) {
        tempo = hf - hi;
    }
    else {
        tempo = 24 - hi + hf;
    }
    
    // Impressão do tempo de jogo
    printf("O JOGO DUROU %d HORA(S)\n", tempo);
    
    return 0;
    
}