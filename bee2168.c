#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int cameras[N+1][N+1];

    // Lê o mapa das câmeras
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            scanf("%d", &cameras[i][j]);
        }
    }

    // Verifica a segurança de cada quadra
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int total = cameras[i][j] + cameras[i+1][j] + cameras[i][j+1] + cameras[i+1][j+1];
            
            if (total >= 2) {
                printf("S");  // Segura
            } else {
                printf("U");  // Insegura
            }
        }
        printf("\n");
    }

    return 0;
}
