#include <stdio.h>

int main() {
    
    // Declaração de variáveis
    double raio, volume;
    double pi = 3.14159;
    
    // Leitura do valor do raio
    scanf("%lf", &raio);
    
    // Cálculo do volume
    volume = (4.0 / 3) * pi * raio * raio * raio;
    
    // Impressão do volume na tela
    printf("VOLUME = %.3lf\n", volume);
    
    return 0;
    
}

