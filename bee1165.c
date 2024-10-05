#include <stdio.h>

int main() {
    int n, x, i, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &x);
        int primo = 1; // Assumimos inicialmente que o número é primo

        // Verificamos a divisibilidade de x por números de 2 até a raiz quadrada de x
        for(j = 2; j * j <= x; j++) {
            if(x % j == 0) {
                primo = 0; // Se x for divisível por algum número, não é primo
                break; // Saímos do loop
            }
        }

        if(x < 2 || (x > 2 && x % 2 == 0)) {
            primo = 0; // 0, 1 e números pares maiores que 2 não são primos
        }

        if(primo) {
            printf("%d eh primo\n", x);
        } else {
            printf("%d nao eh primo\n", x);
        }
    }

    return 0;
}
