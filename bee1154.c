#include <stdio.h>

int main() {

    int idades;
    int soma_idades = 0;
    int n = 0;
    float media;

    do {

        scanf("%d", &idades);

        if(idades < 0) {
            break;
        }

        n++;
        soma_idades += idades;

    } while(idades >= 0);

    media = (float)soma_idades / n;

    printf("%.2f\n", media);

    return 0;

}