#include <stdio.h>

int main() {
    
    // Declaração de variáveis
    int X;
    float Y, consumo;
    
    // Leitura dos dados de entrada
    scanf("%d %f", &X, &Y);
    
    // Cálculo do consumo
    consumo = X / Y;
    
    // Impressão do consumo
    printf("%.3f km/l\n", consumo);
    
    return 0;
    
}