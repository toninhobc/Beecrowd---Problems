#include <stdio.h> 

int main() {
    
    // Declaração de variáveis 
    int a, b, c;
    
    // Leitura dos dados de entrada
    scanf("%d %d %d", &a, &b, &c);
    
    // Cálculo do maior entre a e b
    int ab_max = (a + b + abs(a - b)) / 2;
    
    // Cálculo do maior entre ab_max e c 
    int result = (ab_max + c + abs(ab_max - c)) / 2;
    
    // Impressão do maior valor dentre os três
    printf("%d eh o maior\n", result);
    
    return 0;
    
}