#include <stdio.h>

int main() {

    // Declaração de variáveis
    int a, b, c;

    // Leitura da entrada de dados
    scanf("%d %d %d", &a, &b, &c);

    // Condicionais para avaliar as possibilidades
    if((a == b) || (b == c) || (c == a)) {
        printf("S\n");
    }
    else if(((a + b) == c) || ((a + c) == b) || ((b + c) == a)) {
        printf("S\n");
    }
    else {
        printf("N\n");
    }

    return 0;
    
}