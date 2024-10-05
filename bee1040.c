#include <stdio.h>

int main() {
    float N1, N2, N3, N4, media, exame;
    int p1 = 2;
    int p2 = 3;
    int p3 = 4;
    int p4 = 1;

    // Leitura das quatro notas
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    // Cálculo da média com pesos
    media = ((N1 * p1) + (N2 * p2) + (N3 * p3) + (N4 * p4)) / (p1 + p2 + p3 + p4);

    // Impressão da média
    printf("Media: %.1f\n", media);

    // Verificação da situação do aluno
    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } 
    else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } 
    else {
        printf("Aluno em exame.\n");

        // Leitura da nota do exame
        scanf("%f", &exame);

        // Impressão da nota do exame
        printf("Nota do exame: %.1f\n", exame);

        // Recálculo da média final
        media = (media + exame) / 2;

        // Verificação da situação final do aluno após o exame
        if (media >= 5.0) {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media);
        } 
        else {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", media);
        }
    }

    return 0;
}

