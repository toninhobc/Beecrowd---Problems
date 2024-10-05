#include <stdio.h>
#include <math.h>

int main() {
    
    // Declaração de variáveis
    double x1, y1, x2, y2, dist;
    
    // Leitura dos dados de entrada
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    
    // Cálculo da distância 
    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    // Impressão da distância
    printf("%.4lf\n", dist);
    
    return 0;
    
}