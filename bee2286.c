#include <stdio.h>

int main() {

    int n, i, a, b;
    char nome_a[11];
    char nome_b[11];
    int count = 1;

    do {

        scanf("%d", &n);

        if(n == 0) {
            return 0;
        }

        scanf("%s", nome_a);
        scanf("%s", nome_b);

        printf("Teste %d\n", count);

        for(i = 0; i < n; i++) {

            scanf("%d %d", &a, &b);

            if(((a + b) % 2) == 0) {
                printf("%s\n", nome_a);
            }
            else {
                printf("%s\n", nome_b);
            }

        }

        printf("\n");

        count++;

    } while(n != 0);

    return 0;

}