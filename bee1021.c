#include <stdio.h>

int main() {
    double valor;
    int notas[] = {100, 50, 20, 10, 5, 2};
    int moedas[] = {100, 50, 25, 10, 5, 1}; // Valor em centavos
    int qtd_notas[6] = {0};
    int qtd_moedas[6] = {0};

    scanf("%lf", &valor);

    int centavos = valor * 100; // Convertendo para centavos

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        qtd_notas[i] = centavos / (notas[i] * 100); // Convertendo o valor da nota para centavos
        centavos -= qtd_notas[i] * notas[i] * 100;
        printf("%d nota(s) de R$ %d.00\n", qtd_notas[i], notas[i]);
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        qtd_moedas[i] = centavos / moedas[i];
        centavos -= qtd_moedas[i] * moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", qtd_moedas[i], moedas[i] / 100.0); // Convertendo o valor da moeda para reais
    }

    return 0;
}
