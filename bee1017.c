#include <stdio.h>

int main() {
    
    // Declaração de variáveis
    int t, vm;
    double dist, vol;
    
    // Leitura dos dados de entrada
    scanf("%d %d", &t, &vm);
    
    // Cálculo da distância e do volume 
    dist = t * vm;
    vol = dist / 12;
    
    // Impressão do volume
    printf("%.3lf\n", vol);
    
    return 0;
    
}