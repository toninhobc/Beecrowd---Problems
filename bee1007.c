#include <stdio.h> 

int main() {
    
    /*declaracao de variaveis*/
    int A, B, C, D, DIFERENCA;
    
    /*leitura dos dados de entrada*/
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    /*calculo da diferenca*/
    DIFERENCA = (A * B - C * D);
    
    /*impressao da diferenca*/
    printf("DIFERENCA = %d\n", DIFERENCA);
    
    return 0;
    
}