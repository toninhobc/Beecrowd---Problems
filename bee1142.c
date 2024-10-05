#include <stdio.h>

int main() {

    int n, i, j;

    scanf("%d", &n); // Ler o valor de N

    for(i = 0, j = 1; i < n; i++) {
        printf("%d %d %d PUM\n", j, j + 1, j + 2);
        j += 4; // Incrementar j para o próximo conjunto de números
    }

    return 0;
}
