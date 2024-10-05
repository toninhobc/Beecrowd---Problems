#include <stdio.h>

int main() {
    
    // Declaração de variáveis
    int c1, n1, c2, n2;
    float v1, v2, total;
    
    //Leitura dos dados de entrada
    scanf("%d %d %f", &c1, &n1, &v1);
    scanf("%d %d %f", &c2, &n2, &v2);
    
    //Cálculo do valor a ser pago
    total = (n1 * v1 + n2 * v2);
    
    //Impressão do valor a ser pago
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    
    return 0;
    
}