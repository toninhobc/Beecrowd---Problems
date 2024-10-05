#include <stdio.h>

int main() {
    
    // Declaração de variáveis
    int t1, t2, t3, t4;
    int tomadas;
    
    // Leitura dos dados de entrada
    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);
    
    // Cálculo do número de tomadas disponíveis
    tomadas = (t1 - 1) + (t2 - 1) + (t3 - 1) + t4;
    
    // Impressão do valor de tomadas disponíveis
    printf("%d\n", tomadas);
    
    return 0;
    
}