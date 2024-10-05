#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    scanf("%d", &N);

    // Declaração da matriz que representa a floresta
    int floresta[N][N];

    // Leitura da floresta (matriz NxN)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &floresta[i][j]);
        }
    }

    // Declaração de um array para marcar as espécies encontradas (tamanho 1001 porque o valor máximo de Kij é 1000)
    bool coletadas[1001] = {false};

    // Leitura das coordenadas visitadas por Bino (2 * N coordenadas)
    for (int i = 0; i < 2 * N; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        // Ajuste das coordenadas para base zero
        x--; 
        y--;
        // Marcar a espécie encontrada
        coletadas[floresta[x][y]] = true;
    }

    // Contagem das espécies coletadas
    int especiesColetadas = 0;
    for (int i = 1; i <= 1000; i++) {
        if (coletadas[i]) {
            especiesColetadas++;
        }
    }

    // Imprimir o número de espécies coletadas
    printf("%d\n", especiesColetadas);

    return 0;
}
