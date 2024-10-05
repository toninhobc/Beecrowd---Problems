#include <stdio.h>

int main() {

    int n, i;
    float v1, v2, v3, media;
    int peso1 = 2;
    int peso2 = 3;
    int peso3 = 5;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%f %f %f", &v1, &v2, &v3);
        
        media = ((v1 * peso1) + (v2 * peso2) + (v3 * peso3)) / (peso1 + peso2 + peso3);
        printf("%.1f\n", media);
    }

    return 0;
}