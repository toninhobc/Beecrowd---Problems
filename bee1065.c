#include <stdio.h>

int main() {

    int valor[5];
    int i;
    int pares = 0;

    for(i = 0; i < 5; i++) {

        scanf("%d", &valor[i]);

        if((valor[i]%2) == 0) {

            pares++;
        }
    }

    printf("%d valores pares\n", pares);

    return 0;
}