#include <stdio.h>

int main() {
    
    /*declaracao de variaveis*/
    double A, B, C, MEDIA;
    double pesoA = 2;
    double pesoB = 3;
    double pesoC = 5;
    
    /*leitura dos dados de entrada*/
    scanf("%lf %lf %lf", &A, &B, &C);
    
    /*calculo da media*/
    MEDIA = (A * pesoA + B * pesoB + C * pesoC) / (pesoA + pesoB + pesoC);
    
    /*impressao da media*/
    printf("MEDIA = %.1lf\n", MEDIA);
    
    return 0;
    
}