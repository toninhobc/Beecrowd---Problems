#include <stdio.h>

int main() {
    
    /*declaracao de variaveis*/
    double raio, pi, area;
    pi = 3.14159;
    
    /*leitura do dado do raio*/
    scanf("%lf", &raio);
    
    /*calculo da area*/
    area = pi * raio * raio;
    
    /*saida de dados da area*/
    printf("A=%.4lf\n", area);
    
    return 0;
    
}