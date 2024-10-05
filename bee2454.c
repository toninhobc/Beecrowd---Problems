#include <stdio.h>

int main() {

    // Declaração de variáveis
    int p, r;

    // Leitura dos dados de entrada
    scanf("%d %d", &p, &r);

    // Condicionais para separar os problemas em casos
    if((p == 1) && (r == 1)) {
        printf("A\n");
    }
    else if((p == 1) && (r == 0)) {
        printf("B\n");
    }
    else if((p == 0) && (r == 1)) {
        printf("C\n");
    }
    else if((p == 0) && (r == 0)) {
        printf("C\n");
    }

    return 0;
    
}