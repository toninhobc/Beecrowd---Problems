#include <stdio.h>

int main() {

    int n, x, i, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {

        int soma = 0;

        scanf("%d", &x);

        for(j = 1; j < x; j++) {

            if(x % j == 0) {
                soma += j;
            }
        }

        if(soma == x) {
            printf("%d eh perfeito\n", x);
        }
        else {
            printf("%d nao eh perfeito\n", x);
        }
    }

    return 0;
}