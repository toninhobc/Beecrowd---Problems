#include <stdio.h> 

int main() {
    
    /*declaracao de variaveis*/
    int num, hrs; 
    float val_hora, salario;
    
    /*leitura dos dados de entrada*/
    scanf("%d %d %f", &num, &hrs, &val_hora);
    
    /*calculo do salario*/
    salario = hrs * val_hora;
    
    /*impressao do numero e do salario*/
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", salario);
    
    return 0;
    
}