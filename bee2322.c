#include <stdio.h>

int main() {
    int N, soma_total, soma_parcial = 0, numero;
    
    // Lê o valor de N
    scanf("%d", &N);
    
    // Calcula a soma de 1 a N (usando a fórmula da soma de uma progressão aritmética)
    soma_total = N * (N + 1) / 2;
    
    // Lê os N - 1 números e calcula a soma parcial
    for (int i = 0; i < N - 1; i++) {
        scanf("%d", &numero);
        soma_parcial += numero;
    }
    
    // O número faltante será a diferença entre a soma total e a soma parcial
    printf("%d\n", soma_total - soma_parcial);

    return 0;
}
