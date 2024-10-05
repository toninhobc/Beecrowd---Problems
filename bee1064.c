#include <stdio.h>

int main() {

    float valor[6];
    int i;
    int positivos = 0;
    float soma = 0.0;
    float media;

    for(i = 0; i < 6; i++) {
        scanf("%f", &valor[i]);

        if(valor[i] > 0) {
            positivos++;
            soma += valor[i];
        }
    }

    printf("%d valores positivos\n", positivos);

    media = soma / positivos;

    printf("%.1f\n", media);

    return 0;

}