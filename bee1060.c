#include <stdio.h>

int main() {

    float valor[6];
    int i;
    int positivos = 0;

    for(i = 0; i < 6; i++) {
        scanf("%f", &valor[i]);

        if(valor[i] > 0) {
            positivos++;
        }
    }

    printf("%d valores positivos\n", positivos);

    return 0;
    
}