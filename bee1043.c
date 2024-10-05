#include <stdio.h>

int main() {
    
    // Declaração de variáveis
    float a, b, c;
    
    // Leitura dos dados de entrada
    scanf("%f %f %f", &a, &b, &c);
    
    // Estruturas condicionais para definir se é triângulo
    if((a + b) > c && (a + c) > b && (c + b) > a) {
        float perimetro = a + b + c;
        printf("Perimetro = %.1f\n", perimetro);
    }
    else {
        float area = ((a + b) * c) / 2;
        printf("Area = %.1f\n", area);
    }
    
    return 0;
    
}