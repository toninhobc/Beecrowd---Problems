#include <stdio.h>

int main() {

    int m, n, i, temp;

    for(;;) {

        int soma = 0;

        scanf("%d %d", &m, &n);

        if((m <= 0) || (n <= 0)) {
            break;
        }

        if(m > n) {

            temp = m;
            m = n;
            n = temp;

        }

        for(i = m; i <=n; i++) {

            soma += i;
            printf("%d ", i);
            
        }

        printf("Sum=%d\n", soma);

    }

    return 0;
}