#include <stdio.h>

int main() {
    int t; // Número de pessoas que clicaram no terceiro link
    scanf("%d", &t);

    // Número de pessoas que clicaram no primeiro link
    int pessoas_primeiro_link = 4 * t;

    printf("%d\n", pessoas_primeiro_link);
    return 0;
}
