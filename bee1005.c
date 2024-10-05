#include <stdio.h>

int main() {
    
    /*declaracao de variaveis*/
    double A, B, MEDIA;
    double peso_A = 3.5;
    double peso_B = 7.5;
    
    /*leitura dos dados de entrada*/
    scanf("%lf %lf", &A, &B);
    
    /*calculo da media*/
    MEDIA = (A * peso_A + B * peso_B) / (peso_A + peso_B);
    
    /*imprimir a media*/
    printf("MEDIA = %.5lf\n", MEDIA);
    
    return 0;
}