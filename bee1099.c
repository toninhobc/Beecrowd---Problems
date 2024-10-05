#include <stdio.h>

int main() {

    int n, i, j, x, y, temp;
    int soma = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {

        scanf("%d %d", &x, &y);

        soma = 0;

        if(x > y) {

            temp = x;
            x = y; 
            y = temp;

        }

        x++;

        for(j = x; j < y; j++){

            if((j % 2) != 0) {
                soma += j;
            }

        }

        printf("%d\n", soma);
    }

    return 0;
}