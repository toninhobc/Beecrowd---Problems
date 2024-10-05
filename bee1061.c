#include <stdio.h>

int main() {

    // Declaração de variáveis
    int dia1, hora1, minuto1, segundo1;
    int dia2, hora2, minuto2, segundo2;
    int inicio, fim, tempo;
    int dias, horas, minutos, segundos;

    // Leitura da entrada de dados
    scanf("Dia %d\n", &dia1);
    scanf("%d : %d : %d\n", &hora1, &minuto1, &segundo1);
    scanf("Dia %d\n", &dia2);
    scanf("%d : %d : %d\n", &hora2, &minuto2, &segundo2);

    // Cálculo do tempo de duração
    inicio = dia1 * 86400 + hora1 * 3600 + minuto1 * 60 + segundo1;
    fim = dia2 * 86400 + hora2 * 3600 + minuto2 * 60 + segundo2;
    tempo = abs(inicio - fim);

    // Cálculo dos dias/horas/minutos/segundos
    dias = tempo / 86400;
    horas = tempo % 86400 / 3600;
    minutos = tempo % 86400 % 3600 / 60;
    segundos = tempo % 86400 % 3600 % 60;

    // Impressão dos dias/horas/minutos/segundos
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dias, horas, minutos, segundos);

    return 0;

}