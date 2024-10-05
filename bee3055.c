#include <stdio.h>
 
int main() {
 
    // Declaração de variáveis
    int A, M, B;
    
    // Leitura dos dados que João conhece
    scanf("%d", &A);
    scanf("%d", &M);
    
    // Cálculo da nota B
    B = 2 * M - A;
    
    // Impressão da nota B 
    printf("%d\n", B);
 
    return 0;
}