#include <stdio.h>

int main() {

    int n, x, y, i;
    float frac;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {

        scanf("%d %d", &x, &y);

        if(y == 0) {
            printf("divisao impossivel\n");   
        }
        else {
            frac = (float)x / y;
            printf("%.1f\n", frac);
        }

    }

    return 0;

}