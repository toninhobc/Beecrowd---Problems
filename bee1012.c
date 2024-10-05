#include <stdio.h>

int main() {
    
    // Declaração de variáveis
    double A, B, C; 
    double tri, circ, trap, quad, ret;
    double pi = 3.14159;
    
    // Leitura dos dados de entrada
    scanf("%lf %lf %lf", &A, &B, &C);
    
    // Cálculo das áreas específicas
    tri = (A * C) / 2;
    circ = pi * C * C;
    trap = (A + B) * C / 2;
    quad = B * B;
    ret = A * B;
    
    // Impressão do valor de cada área
    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", circ);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", quad);
    printf("RETANGULO: %.3lf\n", ret);
    
    return 0;
    
}