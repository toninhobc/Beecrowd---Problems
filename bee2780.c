#include <stdio.h>

int main() {

    // Declaração da variável
    int d;

    // Leitura da entrada de dados
    scanf("%d", &d);

    // Condicionais que definem os pontos com base na distância
    if((d <= 800)) {
        printf("1\n");
    }
    else if((d > 800) && (d <= 1400)) {
        printf("2\n");
    }
    else if((d > 1400) && (d <= 2000)) {
        printf("3\n");
    }

    return 0;
    
}