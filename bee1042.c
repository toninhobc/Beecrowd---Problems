#include <stdio.h>

int main() {
    
    // Declaração de variáveis
    int a, b, c;
    
    // Leitura dos dados de entrada
    scanf("%d %d %d", &a, &b, &c);
    
    // Estruturas condicionais para definir a ordem crescente
    if ((a > b) && (a > c) && (b < c)) {
        printf("%d\n%d\n%d\n\n", b, c, a);
    }
    else if((a > b) && (a > c) && (b > c)) {
        printf("%d\n%d\n%d\n\n", c, b, a);
    }
    else if((a < b) && (a > c) && (b > c)) {
        printf("%d\n%d\n%d\n\n", c, a, b);
    }
    else if((a > b) && (a < c) && (b < c)) {
        printf("%d\n%d\n%d\n\n", b, a, c);
    }
    else if((a < b) && (a < c) && (b < c)) {
        printf("%d\n%d\n%d\n\n", a, b, c);
    }
    else {
        printf("%d\n%d\n%d\n\n", a, c, b);
    }
    
    // Impressão na ordem original
    printf("%d\n%d\n%d\n", a, b, c);
    
    return 0;
    
}