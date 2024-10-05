#include <stdio.h>

int main() {
    
    // Declaração de variáveis
    int code, qtd;
    float preco, valor;
    
    // Leitura dos dados de entrada
    scanf("%d %d", &code, &qtd);
    
    // Cálculo do valor usando estruturas condicionais
    if(code == 1) {
        preco = 4.0;
        valor = qtd * preco;
        printf("Total: R$ %.2f\n", valor);
    }
    else if(code == 2) {
        preco = 4.5;
        valor = qtd * preco;
        printf("Total: R$ %.2f\n", valor); 
    }
    else if(code == 3) {
        preco = 5.0;
        valor = qtd * preco;
        printf("Total: R$ %.2f\n", valor);
    }
    else if(code == 4) {
        preco = 2.0;
        valor = qtd * preco;
        printf("Total: R$ %.2f\n", valor);
    }
    else {
        preco = 1.5;
        valor = qtd * preco;
        printf("Total: R$ %.2f\n", valor);
    }
    
    return 0;
    
}