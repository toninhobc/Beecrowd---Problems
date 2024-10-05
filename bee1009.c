#include <stdio.h>

int main() {
    
    // Declaração de variáveis
    char nome_vendedor[100];
    double salario_fixo, total_vendas, comissao, total_receber;

    // Ler o nome do vendedor
    scanf("%s", nome_vendedor);

    // Ler o salário fixo e o total de vendas efetuadas
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas);

    // Calcular a comissão (15% das vendas)
    comissao = 0.15 * total_vendas;

    // Calcular o total a receber (salário fixo + comissão)
    total_receber = salario_fixo + comissao;

    // Imprimir o total a receber com duas casas decimais
    printf("TOTAL = R$ %.2lf\n", total_receber);

    return 0;
}
